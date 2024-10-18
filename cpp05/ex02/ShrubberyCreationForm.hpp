/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:57:57 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/10/18 21:24:41 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP
#include <iostream>
#include "AForm.hpp"
class ShrubberyCreationForm : public AForm
{
private:
	std::string _target;
	ShrubberyCreationForm(void);
public:
	ShrubberyCreationForm(std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &scf);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &scf);
	~ShrubberyCreationForm(void);
	
	void execute(Bureaucrat const &executor) const;


};

#endif