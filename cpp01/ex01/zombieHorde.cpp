/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:11:54 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/11 13:19:51 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    for( int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
    }
    return zombies;
}