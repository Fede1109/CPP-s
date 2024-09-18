/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:11:12 by fede              #+#    #+#             */
/*   Updated: 2024/09/18 13:28:16 by fdiaz-gu         ###   ########.fr       */
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

	
};
	std::ostream& operator<<(std::ostream& stream, AForm& form);
#endif