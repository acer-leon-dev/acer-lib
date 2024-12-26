#include "acerlib_pathmanip.h"
#if defined(_WIN32)
	#include <windows.h>
#elif defined(__linux__)
	#include <unistd.h>
#elif defined(__APPLE__)
	#include <mach-o/dyld.h>
#endif


bool acer::path::ends_with_separator(const std::string& path) {
	return std::string("/\\").find(path.back()) != std::string::npos;
}


std::string acer::path::file_to_directory(std::string path, char sep) {
	path = fix_separators(path, sep);
	if (!ends_with_separator(path)) {
		path += sep;
	}
	return path;
}


std::string acer::path::fix_separators(std::string path, char sep) {
	size_t start_index = 0;
	size_t end_index = 0;
	while (end_index < path.size()) {
		start_index = path.find_first_of("/\\", start_index);
		end_index = path.find_first_not_of("/\\", start_index);
		if (end_index != std::string::npos)
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


std::string acer::path::join_paths(std::initializer_list<const std::string> paths, char sep)
{
	if (paths.size() == 0) {
		return "";
	}

	std::string full_path = *paths.begin();

	for (const std::string& path : paths)
	{
		full_path += sep + path;
	}

	return fix_separators(full_path, sep);
}


std::string acer::path::parent_of(const std::string& dir, int depth, char sep)
{
	std::string result = dir;
	size_t separator_index;

	int i = ends_with_separator(dir) ? -1 : 0;
	for (; i < depth; i++) {
		separator_index = result.find_last_not_of("/\\", result.find_last_of("/\\")) + 1;
		result.erase(separator_index, std::string::npos);
	}

	result += sep;

	return fix_separators(result, sep);
}


std::string acer::path::parent_of(const std::string& dir, char sep)
{
	return parent_of(dir, 1, sep);
}


std::string acer::path::get_binary_dir(int len)
{
	char * strbuffer = new char[len];
    #if defined(_WIN32)
        GetModuleFileNameA(nullptr, strbuffer, len);
	#elif defined(__linux__)
        readlink("/proc/self/exe", strbuffer, len);
	#elif defined(__APPLE__)
		_NSGetExecutablePath(strbuffer, len) 
	#else
		return "";
    #endif
	
	std::string res = std::string(strbuffer);
	delete[] strbuffer;
	return res;
}