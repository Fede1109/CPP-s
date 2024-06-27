/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:11:32 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/06/27 17:16:12 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    // Fixed const b(10);
    // Fixed const c(42.42f);
    // Fixed const d(b);
    a = Fixed(1234.4321f);
    std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}