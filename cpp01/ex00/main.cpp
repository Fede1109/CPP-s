/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:23:56 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/08 16:56:17 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie *z = Zombie::newZombie("Pepe");;

    // z = Zombie::newZombie("Pepe");
    z->announce();
    delete z;
    return (0);
}