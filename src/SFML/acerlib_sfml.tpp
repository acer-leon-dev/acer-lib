#include "../acerlib_sfml.h"

#include <type_traits>
#include <exception>
#include <string>

#define NOT_ARITHMETIC_TYPE_ERROR_MESSAGE(argname) "Argument " + std::string(argname) + " in function " + std::string(__PRETTY_FUNCTION__) + " is not an arithmetic type."

////////////////////////////////////////////////////////////
// sf::Rect
////////////////////////////////////////////////////////////

template<typename T, typename N> 
void acer::sfe::setRectX(sf::Rect<T>& rect, N x)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("x"));
    }

    rect.setPosition(sf::Vector2<T>(x, rect.position.y));
}


template<typename T, typename N> 
void acer::sfe::setRectY(sf::Rect<T>& rect, N y)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("y"));
    }

    rect.setPosition(sf::Vector2<T>(rect.position.x, y));
}


template<typename T, typename N> 
void acer::sfe::setRectCenter(sf::Rect<T>& rect, sf::Vector2<N> dest)
{
    sf::Vector2f center = rect.getCenter();
    rect.setPosition(sf::Vector2<T>(dest.x - center.x, dest.y - center.y));
}


template<typename T, typename N> 
void acer::sfe::setRectCenterX(sf::Rect<T>& rect, N x)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("x"));
    }

    rect.setPosition(sf::Vector2<T>(x - rect.getCenter().x, rect.position.y));
}


template<typename T, typename N> 
void acer::sfe::setRectCenterY(sf::Rect<T>& rect, N y)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("y"));
    }
    
    rect.setPosition(sf::Vector2<T>(rect.position.x, y - rect.getCenter().y));
}


////////////////////////////////////////////////////////////
// sf::Text
////////////////////////////////////////////////////////////

template<typename N>  
void acer::sfe::setTextX(sf::Text& text, N x)
{
        text.setPosition(sf::Vector2f(x, text.getPosition().y));
}


template<typename N>  
void acer::sfe::setTextY(sf::Text& text, N y)
{
        text.setPosition(sf::Vector2f(text.getPosition().x, y));
}


template<typename N> 
void acer::sfe::setTextCenter(sf::Text& text, sf::Vector2<N> dest)
{
    sf::Vector2f origin = text.getOrigin();
    sf::Vector2f center = text.getLocalBounds().getCenter();
    text.setPosition(sf::Vector2f(origin.x + dest.x - center.x, origin.y + dest.y - center.y));
}


template<typename N> 
void acer::sfe::setTextCenterX(sf::Text& text, N x)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("x"));
    }

    sf::FloatRect rect = text.getGlobalBounds();
    text.setPosition(sf::Vector2f(text.getOrigin().x + x - rect.getCenter().x, rect.position.y));
}


template<typename N> 
void acer::sfe::setTextCenterY(sf::Text& text, N y)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("y"));
    }

    sf::FloatRect rect = text.getGlobalBounds();
    text.setPosition(sf::Vector2f(rect.position.x, text.getOrigin().y + y - rect.getCenter().y));
}


////////////////////////////////////////////////////////////
// sf::Sprite
////////////////////////////////////////////////////////////


template<typename N>  
void acer::sfe::setSpriteX(sf::Sprite& sprite, N x)
{
    sprite.setPosition(sf::Vector2f(x, sprite.getPosition().y));
}


template<typename N>  
void acer::sfe::setSpriteY(sf::Sprite& sprite, N y)
{
    sprite.setPosition(sf::Vector2f(sprite.getPosition().x, y));
}


template<typename N> 
void acer::sfe::setSpriteCenter(sf::Sprite& sprite, sf::Vector2<N> dest)
{
    sf::Vector2f origin = sprite.getOrigin();
    sf::Vector2f center = sprite.getLocalBounds().getCenter();
    sprite.setPosition(sf::Vector2f(origin.x + dest.x - center.x, origin.y + dest.y - center.y));
}


template<typename N> 
void acer::sfe::setSpriteCenterX(sf::Sprite& sprite, N x)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("x"));
    }

    sf::FloatRect rect = sprite.getGlobalBounds();
    sprite.setPosition(sf::Vector2f(sprite.getOrigin().x + x - rect.getCenter().x, rect.position.y));
}


template<typename N> 
void acer::sfe::setSpriteCenterY(sf::Sprite& sprite, N y)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("y"));
    }

    sf::FloatRect rect = sprite.getGlobalBounds();
    sprite.setPosition(sf::Vector2f(rect.position.x, sprite.getOrigin().y + y - rect.getCenter().y));
}


////////////////////////////////////////////////////////////
// sf::Shape
////////////////////////////////////////////////////////////


template<typename N>  
void acer::sfe::setShapeX(sf::Shape& shape, N x)
{
    shape.setPosition(sf::Vector2f(x, shape.getPosition().y));
}

template<typename N>  
void acer::sfe::setShapeY(sf::Shape& shape, N y)
{
    shape.setPosition(sf::Vector2f(shape.getPosition().x, y));
}


template<typename N> 
void acer::sfe::setShapeCenter(sf::Shape& shape, sf::Vector2<N> dest)
{
    sf::Vector2f origin = shape.getOrigin();
    sf::Vector2f center = shape.getGeometricCenter();
    shape.setPosition(sf::Vector2f(origin.x + dest.x - center.x, origin.y + dest.y - center.y));
}


template<typename N> 
void acer::sfe::setShapeCenterX(sf::Shape& shape, N x)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("x"));
    }

    sf::FloatRect rect = shape.getGlobalBounds();
    shape.setPosition(sf::Vector2f(shape.getOrigin().x + x - rect.getCenter().x, rect.position.y));
}


template<typename N> 
void acer::sfe::setShapeCenterY(sf::Shape& shape, N y)
{
    if (!std::is_arithmetic<N>())
    {
        throw std::invalid_argument(NOT_ARITHMETIC_TYPE_ERROR_MESSAGE("y"));
    }

    sf::FloatRect rect = shape.getGlobalBounds();
    shape.setPosition(sf::Vector2f(rect.position.x, shape.getOrigin().y + y - rect.getCenter().y));
}