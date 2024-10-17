/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:11:12 by fede              #+#    #+#             */
/*   Updated: 2024/10/17 17:36:54 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
	const std::string _target;
	const std::string _name;
	bool _isSigned;
	const int _grade;
	const int _exec;

public:
	AForm ( void );
	AForm(const std::string name, const int grade, const int exec);
	AForm(AForm &form);
	AForm &operator=(const AForm &form);
	~AForm(void);
	virtual int getGrade(void) const = 0;
	virtual int getExecutionGrade(void) const = 0;
	virtual const std::string getName(void) const = 0;
	virtual bool getSigned(void) const = 0;
	virtual void beSigned(Bureaucrat& bur) const = 0;
	virtual void execute(Bureaucrat const &executor) const = 0;
	class FormNotSigned: public std::exception
		{
			public:
				const char * what( void ) const throw();
		};
		class GradeTooHighException : public std::exception
	{
	public:
		virtual char const *what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual char const *what(void) const throw();
	};

	
};
	std::ostream& operator<<(std::ostream& stream, AForm& form);
#endif