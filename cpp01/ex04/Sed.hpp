/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:14:22 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/13 15:02:07 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
	private:
		std::string outfile;
		std::string infile;
	public:
		Sed( std::string filename );
		~Sed();
		void	replace( std::string s1, std::string s2);
};
#endif