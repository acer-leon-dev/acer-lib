#include "acerlib_sfml.h"


////////////////////////////////////////////////////////////
// sf::Text
////////////////////////////////////////////////////////////


void acer::sfe::setTextX(sf::Text& text, float x)
{
    text.setPosition(sf::Vector2f(x, text.getPosition().y));
}

  
void acer::sfe::setTextY(sf::Text& text, float y)
{
    text.setPosition(sf::Vector2f(text.getPosition().x, y));
}

 
void acer::sfe::setTextCenter(sf::Text& text, sf::Vector2<float> dest)
{
    sf::Vector2f origin = text.getOrigin();
    sf::Vector2f center = text.getLocalBounds().getCenter();
    text.setPosition(sf::Vector2f(origin.x + dest.x - center.x, origin.y + dest.y - center.y));
}

 
void acer::sfe::setTextCenterX(sf::Text& text, float x)
{
    sf::FloatRect rect = text.getGlobalBounds();
    text.setPosition(sf::Vector2f(text.getOrigin().x + x - rect.getCenter().x, rect.position.y));
}

 
void acer::sfe::setTextCenterY(sf::Text& text, float y)
{
    sf::FloatRect rect = text.getGlobalBounds();
    text.setPosition(sf::Vector2f(rect.position.x, text.getOrigin().y + y - rect.getCenter().y));
}


////////////////////////////////////////////////////////////
// sf::Sprite
////////////////////////////////////////////////////////////

  
void acer::sfe::setSpriteX(sf::Sprite& sprite, float x)
{
    sprite.setPosition(sf::Vector2f(x, sprite.getPosition().y));
}

  
void acer::sfe::setSpriteY(sf::Sprite& sprite, float y)
{
    sprite.setPosition(sf::Vector2f(sprite.getPosition().x, y));
}

 
void acer::sfe::setSpriteCenter(sf::Sprite& sprite, sf::Vector2<float> dest)
{
    sf::Vector2f origin = sprite.getOrigin();
    sf::Vector2f center = sprite.getLocalBounds().getCenter();
    sprite.setPosition(sf::Vector2f(origin.x + dest.x - center.x, origin.y + dest.y - center.y));
}

 
void acer::sfe::setSpriteCenterX(sf::Sprite& sprite, float x)
{
    sf::FloatRect rect = sprite.getGlobalBounds();
    sprite.setPosition(sf::Vector2f(sprite.getOrigin().x + x - rect.getCenter().x, rect.position.y));
}

 
void acer::sfe::setSpriteCenterY(sf::Sprite& sprite, float y)
{
    sf::FloatRect rect = sprite.getGlobalBounds();
    sprite.setPosition(sf::Vector2f(rect.position.x, sprite.getOrigin().y + y - rect.getCenter().y));
}


////////////////////////////////////////////////////////////
// sf::Shape
////////////////////////////////////////////////////////////

  
void acer::sfe::setShapeX(sf::Shape& shape, float x)
{
    shape.setPosition(sf::Vector2f(x, shape.getPosition().y));
}
  
void acer::sfe::setShapeY(sf::Shape& shape, float y)
{
    shape.setPosition(sf::Vector2f(shape.getPosition().x, y));
}

 
void acer::sfe::setShapeCenter(sf::Shape& shape, sf::Vector2<float> dest)
{
    sf::Vector2f origin = shape.getOrigin();
    sf::Vector2f center = shape.getGeometricCenter();
    shape.setPosition(sf::Vector2f(origin.x + dest.x - center.x, origin.y + dest.y - center.y));
}

 
void acer::sfe::setShapeCenterX(sf::Shape& shape, float x)
{
    sf::FloatRect rect = shape.getGlobalBounds();
    shape.setPosition(sf::Vector2f(shape.getOrigin().x + x - rect.getCenter().x, rect.position.y));
}

 
void acer::sfe::setShapeCenterY(sf::Shape& shape, float y)
{
    sf::FloatRect rect = shape.getGlobalBounds();
    shape.setPosition(sf::Vector2f(rect.position.x, shape.getOrigin().y + y - rect.getCenter().y));
}