/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:12:17 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/06/04 15:24:19 by fdiaz-gu         ###   ########.fr       */
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

Fixed::Fixed(const float num): _num(std::roundf((num) * (1 << _bits)))
{
    std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
    
}

//  ******COMPARISON OPERATORS******
Fixed&    Fixed::operator= (const Fixed &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &a )
            this->_num = a.getRawBits();
        return *this;
}

bool  Fixed::operator> (const Fixed &a)
{
    return this->_num > a.getRawBits();
}

bool  Fixed::operator< (const Fixed &a)
{
    return this->_num < a.getRawBits();
}

bool  Fixed::operator>= (const Fixed &a)
{
    return this->_num >= a.getRawBits();
}

bool  Fixed::operator<= (const Fixed &a)
{
    return this->_num <= a.getRawBits();
}

bool  Fixed::operator== (const Fixed &a)
{
    return this->_num == a.getRawBits();
}

bool  Fixed::operator!= (const Fixed &a)
{
    return this->_num != a.getRawBits();
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
    return (float)((getRawBits()) / (1 << _bits));
}

int Fixed::toInt( void ) const
{
    return (getRawBits() >> _bits);
}

std::ostream& operator<<(std::ostream &os, Fixed const &a)
{
    os << a.toFloat();
    return os;
}