/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:12:00 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/11 12:59:19 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (){}

Zombie::~Zombie ()
{
    std::cout << "Zombie" << this->name << "has been destroyed" << std::endl;
}

void    Zombie::setName (std::string name)
{
    this->name = name;
}

void    Zombie::announce ( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
