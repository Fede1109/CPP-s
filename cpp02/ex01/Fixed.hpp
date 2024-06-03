/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:11:41 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/30 17:42:36 by fdiaz-gu         ###   ########.fr       */
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
    Fixed&    operator= (const Fixed &a);
    float   toFloat ( void ) const;
    int     toInt ( void ) const;
    int getRawBits(void) const;
    void    setRawBits(int const raw);

};
std::ostream& operator<<(std::ostream& os, Fixed const &a);

#endif