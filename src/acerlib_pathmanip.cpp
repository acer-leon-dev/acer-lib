#include "acerlib_pathmanip.h"
#include "acerlib_pathmanip.tpp"
#if defined(_WIN32)
	#include <windows.h>
#elif defined(__linux__)
	#include <unistd.h>
#elif defined(__APPLE__)
	#include <mach-o/dyld.h>
#endif


void _join_paths_internal(char sep, std::string& _path) {}

bool acer::path::is_directory(std::string path) {
	return std::string("/\\").find(path.back()) != std::string::npos;
}


std::string acer::path::to_directory(std::string path, char sep) {
	path = fix_separators(path, sep);
	if (!is_directory(path)) {
		path += sep;
	}
	return path;
}


std::string acer::path::fix_separators(std::string path, char sep) {
	size_t start_index = 0;
	size_t end_index = 0;
	while (end_index != std::string::npos) {
		start_index = path.find_first_of("/\\", start_index);
		end_index = path.find_first_not_of("/\\", start_index);
		if (start_index != std::string::npos)
		{
			path.replace(start_index, end_index - start_index, 1, sep);
		}
		start_index++;
	}

	for (char & c : path) {
		if (std::string("/\\").find(c) != std::string::npos) {
			c = sep;
		}
	}

	return path;
}


std::string acer::path::parent_of(std::string dir, int depth, char sep)
{
	std::string result = dir;
	size_t separator_index;

	int i = is_directory(dir) ? -1 : 0;
	for (; i < depth; i++) {
		separator_index = result.find_last_not_of("/\\", result.find_last_of("/\\")) + 1;
		result.erase(separator_index, std::string::npos);
	}

	result += sep;

	return fix_separators(result, sep);
}


std::string acer::path::parent_of(std::string dir, char sep)
{
	return parent_of(dir, 1, sep);
}


std::string acer::path::name_of(std::string path, bool keep_extension, char sep)
{
	if (path.empty()) {
		return "";
	}

	size_t start;
	size_t pos = std::string::npos;

	if (is_directory(path)) {
		pos = path.find_last_not_of("/\\");
	} 
	else {
		if (!keep_extension) {
			pos = path.find_last_of('.');
		}
	}
	
	start = path.find_last_of("/\\", pos) + 1;

	return fix_separators(path.substr(start, pos - start));
}


char acer::path::get_separator()
{
	#ifdef _WIN32
		return '\\';
	#elif defined(__linux__) || defined(__APPLE__) || defined(__unix__)
		return '/';
	#else
		return '/';
    #endif
}


std::string acer::path::get_executable_path()
{
	char * strbuffer = new char[1024];
    #if defined(_WIN32)
        GetModuleFileNameA(nullptr, strbuffer, 1024);
	#elif defined(__linux__)
        readlink("/proc/self/exe", strbuffer, 1024);
	#elif defined(__APPLE__)
		_NSGetExecutablePath(strbuffer, 1024) 
	#else
		return "";
    #endif
	
	std::string res = std::string(strbuffer);
	delete[] strbuffer;
	return res;
}