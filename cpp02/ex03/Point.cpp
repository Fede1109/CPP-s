#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
}

Point::Point( const Point &src ) : _x(src._x), _y(src._y) {
}

Point::~Point() {
}

Point&  Point::operator=( const Point &p ) {
    if ( this != &p ) {
        ( Fixed ) this->_x = p.getX();
        ( Fixed ) this->_y = p.getY();
    }
    return *this;
}

bool Point::operator==(Point const &p) const {
  return this->getX() == p.getX() && this->getY() == p.getY();
}

Fixed Point::getX( void ) const {
    return this->_x;
}

Fixed Point::getY( void ) const {
    return this->_y;
}