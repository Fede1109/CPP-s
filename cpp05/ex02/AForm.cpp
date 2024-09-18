/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:11:19 by fede              #+#    #+#             */
/*   Updated: 2024/09/18 13:29:01 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _target(""), _name(""), _isSigned(false), _grade(150), _exec(1)
{
	std::cout << "Form default constructor!" << std::endl;
}

AForm::AForm(const std::string name, const int grade, const int exec) : _name(name), _grade(grade), _exec(exec)
{

	this->_isSigned = false;
	std::cout << "Form " << this->_name << " constructor!" << std::endl;
}

AForm &AForm::operator=(const AForm &f)
{
	if (this != &f)
		this->_isSigned = f._isSigned;
	return (*this);
}

AForm::AForm(AForm &f) :  _grade(f._grade), _exec(f._exec)
{
	*this = f;
}

AForm::~AForm(void)
{
	std::cout << "Form " << this->_name << " destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &str, AForm &form)
{
	return (str << form.getName() << ", form grade " << form.getGrade());
}