#ifndef BCFBA982_ADE4_4551_A2E3_A695592C8FAB
#define BCFBA982_ADE4_4551_A2E3_A695592C8FAB

#include <SFML/Graphics.hpp>

namespace acer::sfe
{
    ////////////////////////////////////////////////////////////
    // sf::Rect
    ////////////////////////////////////////////////////////////
    
    /// 
    /// @relates sf::Rect
    ///
    /// @brief Sets only the x position of `rect` to `x`.
    ///
    /// @param rect The Rect to modify
    /// @param x The new x-position of `rect` 
    ///
    template<typename T> 
    void setRectX(sf::Rect<T>& rect, float x);

    /// 
    /// @relates sf::Rect
    ///
    /// @brief Sets only the y position of `rect` to `y`.
    ///
    /// @param rect The Rect to modify
    /// @param x The new y-position of `rect` 
    ///
    template<typename T> 
    void setRectY(sf::Rect<T>& rect, float y);

    /// 
    /// @relates sf::Rect
    ///
    /// @brief Sets the center position of `rect` at `dest`.
    ///
    /// @param rect The Rect to modify
    /// @param dest The new position of `rect`
    ///
    template<typename T> 
    void setRectCenter(sf::Rect<T>& rect, sf::Vector2<float> dest);
    
    /// 
    /// @relates sf::Rect
    ///
    /// @brief Sets the center-x position of `rect` to `x`.
    ///
    /// @param rect The Rect to modify
    /// @param x The new x-position of `rect`
    ///
    template<typename T> 
    void setRectCenterX(sf::Rect<T>& rect, float x);

    /// 
    /// @relates sf::Rect
    ///
    /// @brief Sets the center-y position of `rect` to `y`.
    ///
    /// @param rect The Rect to modify
    /// @param y The new y-position of `rect`
    ///
    template<typename T> 
    void setRectCenterY(sf::Rect<T>& rect, float y);

    ////////////////////////////////////////////////////////////
    // sf::Text
    ////////////////////////////////////////////////////////////

    /// 
    /// @relates sf::Text
    ///
    /// @brief Sets only the x position of `text` to `x`.
    ///
    /// @param text The Text to modify
    /// @param x The new x-position of `text` 
    ///
    void setTextX(sf::Text& text, float x);

    /// 
    /// @relates sf::Text
    ///
    /// @brief Sets only the y position of `text` to `y`.
    ///
    /// @param text The Text to modify
    /// @param x The new y-position of `text` 
    ///
    void setTextY(sf::Text& text, float y);

    /// 
    /// @relates sf::Text 
    ///
    /// @brief Sets the center position of `text` at `dest` (ignoring the origin).
    ///
    /// @param text The Text to modify
    /// @param dest The new position of `text`
    ///
    void setTextCenter(sf::Text& text, sf::Vector2<float> dest);
    
    /// 
    /// @relates sf::Text 
    ///
    /// @brief Sets the center-x position of `text` to `x` (ignoring the origin).
    ///
    /// @param text The Text to modify
    /// @param x The new x-position of `text`
    ///
    void setTextCenterX(sf::Text& text, float x);

    /// 
    /// @relates sf::Text 
    ///
    /// @brief Sets the center-y position of `text` to `y` (ignoring the origin).
    ///
    /// @param text The Text to modify
    /// @param y The new y-position of `text`
    ///
    void setTextCenterY(sf::Text& text, float y);

    ////////////////////////////////////////////////////////////
    // sf::Sprite
    ////////////////////////////////////////////////////////////

    /// 
    /// @relates sf::Sprite
    ///
    /// @brief Sets only the x position of `sprite` to `x`.
    ///
    /// @param sprite The Sprite to modify
    /// @param x The new x-position of `sprite` 
    ///
    void setSpriteX(sf::Sprite& sprite, float x);

    /// 
    /// @relates sf::Sprite
    ///
    /// @brief Sets only the y position of `sprite` to `y`.
    ///
    /// @param sprite The Sprite to modify
    /// @param x The new y-position of `sprite` 
    ///
    void setSpriteY(sf::Sprite& sprite, float y);

    /// 
    /// @relates sf::Sprite
    /// 
    /// @brief Sets the center position of `sprite` at `dest` (ignoring the origin).
    ///
    /// @param sprite The Sprite to modify
    /// @param dest The new position of `sprite`
    ///
    void setSpriteCenter(sf::Sprite& sprite, sf::Vector2<float> dest);
    
    /// 
    /// @relates sf::Sprite
    /// 
    /// @brief Sets the center-x position of `sprite` to `x` (ignoring the origin).
    ///
    /// @param  sprite The Sprite to modify
    /// @param x The new x-position of `sprite`
    ///
    void setSpriteCenterX(sf::Sprite& sprite, float x);
    
    /// 
    /// @relates sf::Sprite
    /// 
    /// @brief Sets the center-y position of `sprite` to `y` (ignoring the origin).
    ///
    /// @param  sprite The Sprite to modify
    /// @param y The new y-position of `sprite`
    ///
    void setSpriteCenterY(sf::Sprite& sprite, float y);

    ////////////////////////////////////////////////////////////
    // sf::Shape
    ////////////////////////////////////////////////////////////
    
    /// 
    /// @relates sf::Shape
    ///
    /// @brief Sets only the x position of `shape` to `x`.
    ///
    /// @param shape The Shape to modify
    /// @param x The new x-position of `shape` 
    ///
    void setShapeX(sf::Shape& shape, float x);

    /// 
    /// @relates sf::Shape
    ///
    /// @brief Sets only the y position of `shape` to `y`.
    ///
    /// @param shape The Shape to modify
    /// @param x The new y-position of `shape` 
    ///
    void setShapeY(sf::Shape& shape, float y);

    /// 
    /// @relates sf::Shape
    /// 
    /// @brief Sets the center position of `shape` at `dest` (ignoring the origin).
    ///
    /// @param shape The Shape to modify
    /// @param dest The new position of `shape`
    ///
    void setShapeCenter(sf::Shape& shape, sf::Vector2<float> dest);

    /// 
    /// @relates sf::Shape
    /// 
    /// @brief Sets the center-x position of `shape` to `x` (ignoring the origin).
    ///
    /// @param shape The Shape to modify
    /// @param x The new x-position of `shape`
    ///
    void setShapeCenterX(sf::Shape& shape, float x);

    /// 
    /// @relates sf::Shape
    /// 
    /// @brief Sets the center-y position of `shape` to `y` (ignoring the origin).
    ///
    /// @param shape The Shape to modify
    /// @param y The new y-position of `shape`
    ///
    void setShapeCenterY(sf::Shape& shape, float y);
}

#include "acerlib_sfml.tpp"

#endif /* BCFBA982_ADE4_4551_A2E3_A695592C8FAB */
