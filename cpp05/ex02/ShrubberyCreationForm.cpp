/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:40:56 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/09/18 15:28:57 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): _target(""), _name(""), _isSigned(false), _req_exec(1), _req_grade(1){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):_target(target), _name(""), _isSigned(false), _req_exec(1), _req_grade(1){}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf)
{
	if (this != &scf)
		this->_isSigned = scf._isSigned;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &sfc): _req_grade(sfc._req_grade), _req_exec(sfc._req_exec)
{
    *this = sfc;
}


ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called!" << std::endl;
}

std::string ShrubberyCreationForm::getName(void)
{
	return this->_name;
}

std::string ShrubberyCreationForm::getTarget(void)
{
	return this->_target;
}

int ShrubberyCreationForm::getReqGrade(void)
{
	return this->_req_grade;
}

int ShrubberyCreationForm::getReqExec(void)
{
	return this->_req_exec;
}

bool ShrubberyCreationForm::getSigned(void)
{
	return this->_isSigned;
}

std::ostream &operator<<(std::ostream str, ShrubberyCreationForm &scf)
{
	if (!scf.getSigned())
		str << scf.getName() << " need a Bureaucrat whith grade " << scf.getReqGrade() << " to sign it and one with grade " << scf.getReqExec() << " to execute it. ";
	else
		str << " Shrubbery already signed" << std::endl;
}

