/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:29:27 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/09/18 15:45:39 by fdiaz-gu         ###   ########.fr       */
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
	std::string getName(void);
	std::string getTarget(void);
	int getReqGrade(void);
	int getReqExec(void);
	bool getSigned(void);
};

std::ostream &operator<<(std::ostream &str, PresidentialPardonForm &ppf);


#endif
