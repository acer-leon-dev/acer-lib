#ifndef BCFBA982_ADE4_4551_A2E3_A695592C8FAB
#define BCFBA982_ADE4_4551_A2E3_A695592C8FAB

#include <SFML/Graphics.hpp>

namespace acer::sfe
{
    ////////////////////////////////////////////////////////////
    // sf::Rect
    ////////////////////////////////////////////////////////////
    
    /// 
    /// \relates sf::Rect
    ///
    /// \brief Sets only the x position of `rect` to `x`.
    ///
    /// \param rect The Rect to modify
    /// \param x The new x-position of `rect` 
    ///
    template<typename T, typename N>  void setRectX(sf::Rect<T>& rect, N x);

    /// 
    /// \relates sf::Rect
    ///
    /// \brief Sets only the y position of `rect` to `y`.
    ///
    /// \param rect The Rect to modify
    /// \param x The new y-position of `rect` 
    ///
    template<typename T, typename N>  void setRectY(sf::Rect<T>& rect, N y);

    /// 
    /// \relates sf::Rect
    ///
    /// \brief Sets the center position of `rect` at `dest`.
    ///
    /// \param rect The Rect to modify
    /// \param dest The new position of `rect`
    ///
    template<typename T, typename N>  void setRectCenter(sf::Rect<T>& rect, sf::Vector2<N> dest);
    
    /// 
    /// \relates sf::Rect
    ///
    /// \brief Sets the center-x position of `rect` to `x`.
    ///
    /// \param rect The Rect to modify
    /// \param x The new x-position of `rect`
    ///
    template<typename T, typename N>  void setRectCenterX(sf::Rect<T>& rect, N x);

    /// 
    /// \relates sf::Rect
    ///
    /// \brief Sets the center-y position of `rect` to `y`.
    ///
    /// \param rect The Rect to modify
    /// \param y The new y-position of `rect`
    ///
    template<typename T, typename N>  void setRectCenterY(sf::Rect<T>& rect, N y);

    ////////////////////////////////////////////////////////////
    // sf::Text
    ////////////////////////////////////////////////////////////

    /// 
    /// \relates sf::Text
    ///
    /// \brief Sets only the x position of `text` to `x`.
    ///
    /// \param text The Text to modify
    /// \param x The new x-position of `text` 
    ///
    template<typename N>  void setTextX(sf::Text& text, N x);

    /// 
    /// \relates sf::Text
    ///
    /// \brief Sets only the y position of `text` to `y`.
    ///
    /// \param text The Text to modify
    /// \param x The new y-position of `text` 
    ///
    template<typename N>  void setTextY(sf::Text& text, N y);

    /// 
    /// \relates sf::Text 
    ///
    /// \brief Sets the center position of `text` at `dest` (ignoring the origin).
    ///
    /// \param text The Text to modify
    /// \param dest The new position of `text`
    ///
    template<typename N> void setTextCenter(sf::Text& text, sf::Vector2<N> dest);
    
    /// 
    /// \relates sf::Text 
    ///
    /// \brief Sets the center-x position of `text` to `x` (ignoring the origin).
    ///
    /// \param text The Text to modify
    /// \param x The new x-position of `text`
    ///
    template<typename N>  void setTextCenterX(sf::Text& text, N x);

    /// 
    /// \relates sf::Text 
    ///
    /// \brief Sets the center-y position of `text` to `y` (ignoring the origin).
    ///
    /// \param text The Text to modify
    /// \param y The new y-position of `text`
    ///
    template<typename N>  void setTextCenterY(sf::Text& text, N y);

    ////////////////////////////////////////////////////////////
    // sf::Sprite
    ////////////////////////////////////////////////////////////

    /// 
    /// \relates sf::Sprite
    ///
    /// \brief Sets only the x position of `sprite` to `x`.
    ///
    /// \param sprite The Sprite to modify
    /// \param x The new x-position of `sprite` 
    ///
    template<typename N>  void setSpriteX(sf::Sprite& sprite, N x);

    /// 
    /// \relates sf::Sprite
    ///
    /// \brief Sets only the y position of `sprite` to `y`.
    ///
    /// \param sprite The Sprite to modify
    /// \param x The new y-position of `sprite` 
    ///
    template<typename N>  void setSpriteY(sf::Sprite& sprite, N y);

    /// 
    /// \relates sf::Sprite
    /// 
    /// \brief Sets the center position of `sprite` at `dest` (ignoring the origin).
    ///
    /// \param sprite The Sprite to modify
    /// \param dest The new position of `sprite`
    ///
    template<typename N> void setSpriteCenter(sf::Sprite& sprite, sf::Vector2<N> dest);
    
    /// 
    /// \relates sf::Sprite
    /// 
    /// \brief Sets the center-x position of `sprite` to `x` (ignoring the origin).
    ///
    /// \param  sprite The Sprite to modify
    /// \param x The new x-position of `sprite`
    ///
    template<typename N>  void setSpriteCenterX(sf::Sprite& sprite, N x);
    
    /// 
    /// \relates sf::Sprite
    /// 
    /// \brief Sets the center-y position of `sprite` to `y` (ignoring the origin).
    ///
    /// \param  sprite The Sprite to modify
    /// \param y The new y-position of `sprite`
    ///
    template<typename N>  void setSpriteCenterY(sf::Sprite& sprite, N y);

    ////////////////////////////////////////////////////////////
    // sf::Shape
    ////////////////////////////////////////////////////////////
    
    /// 
    /// \relates sf::Shape
    ///
    /// \brief Sets only the x position of `shape` to `x`.
    ///
    /// \param shape The Shape to modify
    /// \param x The new x-position of `shape` 
    ///
    template<typename N>  void setShapeX(sf::Shape& shape, N x);

    /// 
    /// \relates sf::Shape
    ///
    /// \brief Sets only the y position of `shape` to `y`.
    ///
    /// \param shape The Shape to modify
    /// \param x The new y-position of `shape` 
    ///
    template<typename N>  void setShapeY(sf::Shape& shape, N y);

    /// 
    /// \relates sf::Shape
    /// 
    /// \brief Sets the center position of `shape` at `dest` (ignoring the origin).
    ///
    /// \param shape The Shape to modify
    /// \param dest The new position of `shape`
    ///
    template<typename N> void setShapeCenter(sf::Shape& shape, sf::Vector2<N> dest);

    /// 
    /// \relates sf::Shape
    /// 
    /// \brief Sets the center-x position of `shape` to `x` (ignoring the origin).
    ///
    /// \param shape The Shape to modify
    /// \param x The new x-position of `shape`
    ///
    template<typename N>  void setShapeCenterX(sf::Shape& shape, N x);

    /// 
    /// \relates sf::Shape
    /// 
    /// \brief Sets the center-y position of `shape` to `y` (ignoring the origin).
    ///
    /// \param shape The Shape to modify
    /// \param y The new y-position of `shape`
    ///
    template<typename N>  void setShapeCenterY(sf::Shape& shape, N y);
}

#include "acerlib_sfml.tcc"

#endif /* BCFBA982_ADE4_4551_A2E3_A695592C8FAB */
