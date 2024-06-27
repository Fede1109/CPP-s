/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:12:17 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/06/27 18:01:17 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->_num = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(const int num) : _num(num << _bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num): _num(roundf((num) * (1 << _bits)))
{
    std::cout << "Float constructor called" << std::endl;
    std::cout << "NUM: " << _num << std::endl;
}


Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
    
}

Fixed&    Fixed::operator= (const Fixed &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &a )
            this->_num = a._num;
        return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_num);
}

void Fixed::setRawBits(int const raw)
{    
    _num = raw;
}

float   Fixed::toFloat( void )  const
{
    return static_cast<float>((_num)) / ((1 << _bits));
}

int Fixed::toInt( void ) const
{
    return (_num >> _bits);
}

std::ostream& operator<<(std::ostream &os, Fixed const &a)
{
    os << a.toFloat();
    return os;
}