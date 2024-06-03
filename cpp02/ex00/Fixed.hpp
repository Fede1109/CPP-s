/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:11:41 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/30 16:30:45 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
    int _num;
    static const int _bits = 8;
public:
    Fixed();
    Fixed(const Fixed &f);
    void    operator= (Fixed &a);
    ~Fixed();
    int getRawBits(void) const;
    void    setRawBits(int const raw);

};


#endif