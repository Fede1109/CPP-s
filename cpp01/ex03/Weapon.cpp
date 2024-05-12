/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:45:41 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/12 20:47:25 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->setType(type);
}

Weapon::~Weapon(){}

const std::string &Weapon::getType( void )
{
    return this->type;
}

void    Weapon::setType (std::string type)
{
    this->type = type;
}
