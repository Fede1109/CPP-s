/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:24:25 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/10 16:02:18 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <iostream>
#include <string>

std::string Zombie::getName(void)
{
    return this->name;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void   Zombie::announce(void)
{
    std::cout << this->name << ": " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->setName(name);
};

Zombie::Zombie()
{
    std::cout << "Created Zombie!" << std::endl;    
};

Zombie::~Zombie()
{
    std::cout << "Destroyed Entity!" << std::endl;
}