/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:40:56 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/10/17 17:50:24 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _target("Default"), _name("ShrubberyCreation"), _isSigned(false), _req_exec(137), _req_grade(145) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : _target(target), _name("ShrubberyCreation"), _isSigned(false), _req_exec(137), _req_grade(145) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf)
{
	if (this != &scf)
		this->_isSigned = scf._isSigned;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &sfc) : _req_grade(145), _req_exec(137), _target(sfc.getTarget())
{
	*this = sfc;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called!" << std::endl;
}

std::string ShrubberyCreationForm::getName(void) const
{
	return this->_name;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

int ShrubberyCreationForm::getReqGrade(void) const
{
	return this->_req_grade;
}

int ShrubberyCreationForm::getReqExec(void) const
{
	return this->_req_exec;
}

bool ShrubberyCreationForm::getSigned(void) const
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

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() > this->getReqExec())
			throw(AForm::GradeTooLowException());
		std::string filename = this->_target + "_shrubbery";
		std::ofstream outfile (filename);
		outfile << "          |>>> " << std::endl;
		outfile << "          |    " << std::endl;
		outfile << "      _  _|_  _    " << std::endl;
		outfile << "     |;|_|;|_|;|   " << std::endl;
		outfile << "     \\\\.    .  /   " << std::endl;
		outfile << "      \\\\:  .  /    " << std::endl;
		outfile << "       ||:   |     " << std::endl;
		outfile << "       ||:.  |     " << std::endl;
		outfile << "       ||:  .|     " << std::endl;
		outfile << "       ||:   |     " << std::endl;
		outfile << "       ||: , |     " << std::endl;
		outfile << "   __ ||:   | _    " << std::endl;
		outfile << "/____||_|  ||____\\" << std::endl;
		outfile << "      `--'`--'    " << std::endl;
		outfile.close();
	}
	else
	{
		throw(AForm::FormNotSigned());
	}
}