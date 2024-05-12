/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:27:41 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/12 23:02:55 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : name(name), weap(weapon) {}

HumanA::~HumanA(){}
void    HumanA::attack()
{
    if (!this->weap.getType().empty())
        std::cout << this->name << "atacks with their" << this->weap.getType();
    else
        std::cout << this->name << "doesn't have a weapon" << std::endl;
}