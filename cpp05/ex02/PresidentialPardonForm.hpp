/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:29:27 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/10/17 17:43:05 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm
{
private:
	const std::string _target;
	const std::string _name;
	bool _isSigned;
	const int _req_grade;
	const int _req_exec;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(PresidentialPardonForm &ppf);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &ppf);
	~PresidentialPardonForm(void);
	std::string getName(void) const ;
	std::string getTarget(void) const;
	int getReqGrade(void) const;
	int getReqExec(void) const;
	bool getSigned(void) const;
	void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &str, PresidentialPardonForm &ppf);


#endif
