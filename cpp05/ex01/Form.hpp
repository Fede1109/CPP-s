/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:11:12 by fede              #+#    #+#             */
/*   Updated: 2024/09/14 16:03:20 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Bureaucrat;
class Form
{
private:
	std::string const _name;
	bool _isSigned;
	int const _grade;
	int const _exec;

public:
	Form(const std::string name, const int signature, const int exec);
	Form(const Form &form);
	Form &operator=(const Form &form);
	~Form(void);
	int getSignatureGrade(void);
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