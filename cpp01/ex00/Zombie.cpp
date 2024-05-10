/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:24:25 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/08 16:51:28 by fdiaz-gu         ###   ########.fr       */
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

Zombie *Zombie::newZombie( std::string name )
{    
    return (new Zombie(name));
}

void    Zombie::randomChump( std::string name )
{
    Zombie z(name);    
    z.announce();
}