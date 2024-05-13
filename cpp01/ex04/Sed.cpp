/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:14:14 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/13 15:03:32 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sed.hpp"

void    Sed::replace (std::string s1, std::string s2)
{
    std::ifstream    file;
    std::string line;
    
    file.open("file");
   if (file.is_open())
  {
    while (std::getline(file,line) )
    {
      std::cout << line << '\n';
    }
    file.close();
  }
    else 
        std::cout << "Unable to open file";
}

Sed::Sed(std::string filename) : infile(filename){
    this->outfile = this->infile + ".replace";
}

Sed::~Sed (){}