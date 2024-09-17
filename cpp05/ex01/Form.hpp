/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:11:12 by fede              #+#    #+#             */
/*   Updated: 2024/09/17 15:45:59 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string _name;
	bool _isSigned;
	int const _grade;
	int const _exec;

public:
	Form ( void );
	Form(const std::string name, const int grade, const int exec);
	Form(Form &form);
	Form &operator=(const Form &form);
	~Form(void);
	int getGrade(void);
	int getExecutionGrade(void);
	const std::string getName(void);
	bool getSigned(void);
	void beSigned(Bureaucrat& bur);

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
	std::ostream& operator<<(std::ostream& stream, Form& form);
#endif