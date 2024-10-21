/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:35:32 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/10/21 12:01:37 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
int main(void)
{
	std::string target;
	Bureaucrat *pepe = new Bureaucrat("pepe", 1);
	Intern intern1;
	AForm *sf;
	sf = intern1.makeForm("ShrubberyCreationForm", "Juan");	
	std::cout << "------------------------------------" << std::endl;
	{
		target = "él";
		Bureaucrat *jorge = new Bureaucrat("jorge", 140);
		ShrubberyCreationForm *sf = new ShrubberyCreationForm(target);
		jorge->executeForm(*sf); 
		jorge->signForm(*sf);
		jorge->executeForm(*sf);
		pepe->executeForm(*sf);
		std::cout << *jorge << std::endl;
		std::cout << *sf << std::endl;
		delete jorge;
		delete sf;
	}
	std::cout << "------------------------------------" << std::endl;
	{
		target = "jose";
		Bureaucrat *juan = new Bureaucrat("juan", 70);
		RobotomyRequestForm *rrf = new RobotomyRequestForm(target);
		juan->signForm(*rrf);
		juan->executeForm(*rrf);
		pepe->executeForm(*rrf);
		delete juan;
		delete rrf;
	}
	std::cout << "------------------------------------" << std::endl;
	{
		target = "tú";
		Bureaucrat *jose = new Bureaucrat("jose", 20);
		PresidentialPardonForm *ppf = new PresidentialPardonForm(target);
		jose->signForm(*ppf);
		jose->executeForm(*ppf);
		pepe->executeForm(*ppf);
		delete jose;
		delete ppf;
	}
	delete sf;
	delete pepe;
	return 0;
}