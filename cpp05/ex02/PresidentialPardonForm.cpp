/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:29:23 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/10/17 18:15:11 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): _name("PresidentialForm"), _req_exec(5), _req_grade(25), _target("Default")
{
}
	
PresidentialPardonForm::PresidentialPardonForm( std::string target ): _name("PresidentialForm"), _req_exec(5), _req_grade(25), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm & cpy ): _name("PresidentialForm"), _req_exec(5), _req_grade(25), _target(cpy.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
std::string PresidentialPardonForm::getName(void) const
{
	return this->_name;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

int PresidentialPardonForm::getReqGrade(void) const
{
	return this->_req_grade;
}

int PresidentialPardonForm::getReqExec(void) const
{
	return this->_req_exec;
}

bool PresidentialPardonForm::getSigned(void) const
{
	return this->_isSigned;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() > this->getReqExec())
		{
			throw(AForm::GradeTooLowException());
		}
		else
		{
			std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
		}
	}
	else
	{
		throw(AForm::FormNotSigned());
	}
}
