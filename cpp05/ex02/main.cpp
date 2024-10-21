/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:35:32 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/10/21 11:50:42 by fdiaz-gu         ###   ########.fr       */
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
		Bureaucrat *juan = new Bureaucrat("juan", 140);
		ShrubberyCreationForm *sf = new ShrubberyCreationForm(target);
		juan->executeForm(*sf);
		juan->signForm(*sf);
		juan->executeForm(*sf);
		pepe->executeForm(*sf);
		pepe->signForm(*sf);
		// std::cout << "------------------------------------" << std::endl;
		try
		{
			sf->execute(*pepe);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		// std::cout << "------------------------------------" << std::endl;

		std::cout << *juan << std::endl;
		std::cout << *sf << std::endl;
		delete juan;
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