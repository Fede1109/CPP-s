/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:39:43 by fede              #+#    #+#             */
/*   Updated: 2024/09/13 20:08:07 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name(""), _grade(150)
{
    std::cout << "Bureaucrat default constructor!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
	this->_grade = grade;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
	    std::cout << "Bureaucrat " << this->_name << " constructor!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &b)
{
	*this = b;
}

Bureaucrat 	&Bureaucrat::operator=(const Bureaucrat &b)
{
	if (this != &b) 
	{
        this->_grade = b._grade;
    }
	return (*this);
}

std::string Bureaucrat::getName( void ) const
{
    return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
    return this->_grade;
}

void	Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}
Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Bureaucrat " << this->_name << " destructor" << std::endl;
}

void	Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}


char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat  &bureaucrat)
{
	return (str << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}