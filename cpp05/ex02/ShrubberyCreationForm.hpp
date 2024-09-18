/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:57:57 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/09/18 15:33:34 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP
#include <iostream>
#include "AForm.hpp"
class ShrubberyCreationForm
{
private:
	const std::string _target;
	const std::string _name;
	bool _isSigned;
	const int _req_grade;
	const int _req_exec;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &scf);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &scf);
	~ShrubberyCreationForm(void);
	std::string getName(void);
	std::string getTarget(void);
	int getReqGrade(void);
	int getReqExec(void);
	bool getSigned(void);
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

std::ostream &operator<<(std::ostream &stream, ShrubberyCreationForm &scf);

#endif