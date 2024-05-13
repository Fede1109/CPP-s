/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:14:11 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/13 14:42:38 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main (int argc, char **argv)
{
	if (argc != 4)
    {
        std::cout << "Usage: filename s1 s2" << std::endl;
    }
    else
    {
        Sed sed(argv[1]);
        sed.replace(argv[2], argv[3]);
    }
}