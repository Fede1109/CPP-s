/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:56:52 by fede              #+#    #+#             */
/*   Updated: 2024/09/13 20:06:42 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "------------------------" << std::endl;
	Bureaucrat *god = new Bureaucrat("GOD", 150);
	std::cout << *god << std::endl;
	try
	{
		std::cout << "Increment: " << std::flush;
		god->incrementGrade();
		std::cout << *god << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Double Decrement: " << std::flush;
		god->decrementGrade();
		std::cout << *god << std::endl;
		god->decrementGrade();
		std::cout << *god << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete god;
	std::cout << "------------------------" << std::endl;
	try
	{
		Bureaucrat juanito("juanito", 151);
		std::cout << juanito << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------" << std::endl;
	try
	{
		Bureaucrat pepe("pepe", 0);
		std::cout << pepe << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------" << std::endl;
	return (0);
}