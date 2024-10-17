/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:57:57 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/10/17 17:36:52 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP
#include <iostream>
#include "AForm.hpp"
class ShrubberyCreationForm
{
private:
	const std::string _target;
	const std::string _name;
	bool _isSigned;
	const int _req_grade;
	const int _req_exec;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &scf);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &scf);
	~ShrubberyCreationForm(void);
	
	void execute(Bureaucrat const &executor) const;
	std::string getName(void) const;
	std::string getTarget(void) const;
	int getReqGrade(void) const;
	int getReqExec(void) const;
	bool getSigned(void) const;

};

std::ostream &operator<<(std::ostream &stream, ShrubberyCreationForm &scf);

#endif