/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:14:14 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/14 08:13:10 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sed.hpp"

void    Sed::replace (std::string s1, std::string s2)
{
    std::ifstream	file;
    std::ofstream	outfile;
    std::string		line;
    size_t			index;
     //? quitar extension del archivo en caso de que la tenga
    file.open(this->infile);
   if (file.is_open())
  {
    if (std::getline(file,line, '\0'))
    {
        outfile.open(this->outfile);
		index = line.find(s1);
        while (index != std::string::npos)
        {
			line.erase(index, s1.length());
			line.insert(index, s2);
			index = line.find(s1);
        }
		outfile << line;
		outfile.close();
    }
    else
        std::cout << "Empty file";        
    file.close();
  }
    else 
        std::cout << "Unable to open file";
}

Sed::Sed(std::string filename) : infile(filename){
    this->outfile = this->infile + ".replace";
}

Sed::~Sed (){}