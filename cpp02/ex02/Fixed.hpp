/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:11:41 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/06/04 11:08:58 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
private:
    int _num;
    static const int _bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &f);
//  ******COMPARISON OPERATORS******
    Fixed&    operator= (const Fixed &a);
    Fixed&    operator> (const Fixed &a);
    Fixed&    operator>= (const Fixed &a);
    Fixed&    operator<= (const Fixed &a);
    Fixed&    operator== (const Fixed &a);
    Fixed&    operator!= (const Fixed &a);

//  ******ARITHMETIC OPERATORS******
    Fixed&    operator+ (const Fixed &a);
    Fixed&    operator- (const Fixed &a);
    Fixed&    operator* (const Fixed &a);
    Fixed&    operator/ (const Fixed &a);
    
//  ******INCREMENT/DECREMENT OPERATORS******
    Fixed&    operator++ ();
    Fixed    operator++ (int);
    Fixed&    operator-- ();
    Fixed    operator-- (int);

//  ******OVERLOADED FUNCTIONS******

    Fixed&  min(Fixed &f1, Fixed &f2);
    Fixed& min(const Fixed& f1, const Fixed& f2);
    
    float   toFloat ( void ) const;
    int     toInt ( void ) const;
    int getRawBits(void) const;
    void    setRawBits(int const raw);

};
std::ostream& operator<<(std::ostream& os, Fixed const &a);

#endif