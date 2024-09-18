/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:56:52 by fede              #+#    #+#             */
/*   Updated: 2024/09/18 12:27:34 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat jose("José", 10);
	try
	{
		for (size_t i = 0; i < 150; i++)
		{
			jose.incrementGrade();
		}
		std::cout << jose << std::endl;
		jose.incrementGrade();
		std::cout << jose << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat ramon("Ramón", 1000);
		Bureaucrat pepe(ramon);
		std::cout << ramon << std::endl;
		std::cout << pepe << std::endl;
		Form gdpr("GDPR", 3, 8);
		gdpr.beSigned(jose);
		jose.signForm(gdpr);
		std::cout << gdpr << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Bureaucrat juan("Juan", 10);
	Form	f1("Form", 15, 12);
	Form	f2("Form", 5, 9);
	
	f1.beSigned(juan);
	f2.beSigned(juan);
	return (0);
}