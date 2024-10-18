/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:11:19 by fede              #+#    #+#             */
/*   Updated: 2024/10/19 00:02:45 by fede             ###   ########.fr       */
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
	{
		(std::string) this->_name = f._name; 
		this->_isSigned = f._isSigned;
	}
	return (*this);
}


int AForm::getGrade(void) const
{
	return this->_grade;
}

int AForm::getExecutionGrade(void) const
{
	return (this->_exec);
}

const std::string AForm::getName(void) const
{
	return this->_name;
}
void AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->_grade)
		throw GradeTooLowException();
	this->_isSigned = true;
}

bool AForm::getSigned(void) const
{
	return this->_isSigned;
}
AForm::AForm(const AForm &f) :  _grade(f._grade), _exec(f._exec)
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

const char* AForm::FormNotSigned::what() const throw(){
	return "Form is not signed.";
}
char const *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}