/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:11:19 by fede              #+#    #+#             */
/*   Updated: 2024/09/18 12:26:38 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name(""), _isSigned(false), _grade(150), _exec(1)
{
	if (this->_exec < 1 || this->_grade < 1)
		throw(GradeTooHighException());
	else if (this->_grade > 150 || this->_exec > 150)
		throw(GradeTooLowException());
	std::cout << "Form default constructor!" << std::endl;
}

Form::Form(const std::string name, const int grade, const int exec) : _name(name), _grade(grade), _exec(exec)
{

	this->_isSigned = false;
	if (this->_exec < 1 || this->_grade < 1)
		throw(GradeTooHighException());
	else if (this->_grade > 150 || this->_exec > 150)
		throw(GradeTooLowException());
	std::cout << "Form " << this->_name << " constructor!" << std::endl;
}

Form &Form::operator=(const Form &f)
{
	if (this != &f)
		this->_isSigned = f._isSigned;
	return (*this);
}

Form::Form(Form &f) :  _grade(f._grade), _exec(f._exec)
{
	*this = f;
}

Form::~Form(void)
{
	std::cout << "Form " << this->_name << " destructor called" << std::endl;
}

int Form::getGrade(void)
{
	return this->_grade;
}

int Form::getExecutionGrade(void)
{
	return (this->_exec);
}

const std::string Form::getName(void)
{
	return this->_name;
}

bool Form::getSigned(void)
{
	return this->_isSigned;
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() < 1)
		throw(GradeTooHighException());
	if (bur.getGrade() > 150)
		throw(GradeTooLowException());
	if (bur.getGrade() < this->_exec)
	{
		this->_isSigned = true;
		std::cout << bur.getName() << " signed " << this->_grade << std::endl;
	}
	else
		std::cout << bur.getName() << " couldn't sign " << this->getName() << " because " << bur.getName() << " doesn't have enough grade" << std::endl;
}

char const *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &str, Form &form)
{
	return (str << form.getName() << ", form grade " << form.getGrade());
}