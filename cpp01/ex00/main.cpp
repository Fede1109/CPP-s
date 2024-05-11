/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:23:56 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/11 12:38:53 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    std::string name;

    std::cout << "Creating zombie on the stack." << std::endl;
    Zombie z1("Pedro");
    
    std::cout << "Creating zombie on the heap." << std::endl;
    Zombie *z2 = newZombie("Juan");
    z2->announce();
    delete z2;

    std::cout << "With randomChump" << std::endl;
    randomChump("Pepe");
    return (0);
}