/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:24:25 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/11 12:35:39 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <iostream>
#include <string>


void   Zombie::announce(void)
{
    std::cout << this->name << ": " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
};

Zombie::~Zombie()
{
    std::cout << "Destroyed Entity!" << std::endl;
}