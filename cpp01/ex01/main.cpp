/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:11:33 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/11 13:20:09 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 3

int main (void)
{
    Zombie *zombies = zombieHorde(N, "hola");
    for (int i = 0; i < N; i++)
    {
        zombies[i].announce();
    }
    delete [] zombies;
    return (0);
}