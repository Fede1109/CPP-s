/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:29:23 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/09/18 16:04:27 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
std::string PresidentialPardonForm::getName(void)
{
	return this->_name;
}

std::string PresidentialPardonForm::getTarget(void)
{
	return this->_target;
}

int PresidentialPardonForm::getReqGrade(void)
{
	return this->_req_grade;
}

int PresidentialPardonForm::getReqExec(void)
{
	return this->_req_exec;
}

bool PresidentialPardonForm::getSigned(void)
{
	return this->_isSigned;
}
std::ostream &operator<<(std::ostream &str, PresidentialPardonForm &ppf)
{
	 
}