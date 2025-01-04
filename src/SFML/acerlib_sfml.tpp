#include "acerlib_sfml.h"

#include <type_traits>
#include <exception>
#include <string>


////////////////////////////////////////////////////////////
// sf::Rect
////////////////////////////////////////////////////////////

template<typename T> 
void acer::sfe::setRectX(sf::Rect<T>& rect, float x)
{
    rect.setPosition(sf::Vector2<T>(x, rect.position.y));
}


template<typename T> 
void acer::sfe::setRectY(sf::Rect<T>& rect, float y)
{
    rect.setPosition(sf::Vector2<T>(rect.position.x, y));
}


template<typename T> 
void acer::sfe::setRectCenter(sf::Rect<T>& rect, sf::Vector2<float> dest)
{
    sf::Vector2f center = rect.getCenter();
    rect.setPosition(sf::Vector2<T>(dest.x - center.x, dest.y - center.y));
}


template<typename T> 
void acer::sfe::setRectCenterX(sf::Rect<T>& rect, float x)
{
    rect.setPosition(sf::Vector2<T>(x - rect.getCenter().x, rect.position.y));
}


template<typename T> 
void acer::sfe::setRectCenterY(sf::Rect<T>& rect, float y)
{
    rect.setPosition(sf::Vector2<T>(rect.position.x, y - rect.getCenter().y));
}   