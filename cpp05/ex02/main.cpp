/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:35:32 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/10/19 00:11:45 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main(void)
{
	std::string target;
	Bureaucrat *pepe = new Bureaucrat("pepe", 1);

	{
		target = "él";
		Bureaucrat *michael = new Bureaucrat("Michael", 140);
		ShrubberyCreationForm *sf = new ShrubberyCreationForm(target);
		michael->executeForm(*sf); 
		michael->signForm(*sf);
		michael->executeForm(*sf);
		pepe->executeForm(*sf);
		std::cout << *michael << std::endl;
		std::cout << *sf << std::endl;
		delete michael;
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
	delete pepe;
	return 0;
}