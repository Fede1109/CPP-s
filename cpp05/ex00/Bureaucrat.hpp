/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:28:40 by fede              #+#    #+#             */
/*   Updated: 2024/09/17 17:31:19 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat &b);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);	

	Bureaucrat &operator=(const Bureaucrat &b);

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
std::ostream &operator<<(std::ostream& stream, Bureaucrat &b);
#endif