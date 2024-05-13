/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:14:14 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/13 14:44:14 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sed.hpp"

void    Sed::replace (std::string s1, std::string s2)
{
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
}

Sed::Sed(std::string filename) : infile(filename){
    this->outfile = this->infile + ".replace";
}

Sed::~Sed (){}