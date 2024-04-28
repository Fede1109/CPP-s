/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:37:08 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/28 23:29:12 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "./Contact.hpp"
#include "./PhoneBook.hpp"

void	print_value(std::string str)
{
	size_t	len;

	len = strlen(str.c_str());
	if (len > 10)
	{
		for (size_t i = 0; i < 9; i++)
		{
			std::cout << str[i];
		}
		std::cout << "." << "|";
		return ;	
	}
	for (size_t i = len; i < 10; i++)
	{
		std::cout << " ";
	}
	std::cout << str << "|";
}

int	stringToInt(std::string& str)
{
	if (str == "ADD")
		return (1);
	else if (str == "SEARCH")
		return (2);
	else if (str == "EXIT")
		return (3);
	else
		return (4);
}

void	create_menu(void)
{
	std::cout << "TYPE AN OPTION:" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "ADD" << std::endl << "SEARCH" << std::endl << "EXIT" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Your option: ";
}

void	show_menu(PhoneBook p_book)
{
	Contact	contact;
	int		choice;
	int		oldest;
	
	oldest = 0;
	do
	{
		create_menu();
		std::string str;
		std::getline(std::cin, str);
		if (std::cin.eof()==1)
			break ;
		choice = stringToInt(str);		
		switch (choice)
		{
			case 1:
				p_book.save_contact(&p_book, oldest);				
				break ;
			case 2:
				p_book.show_contact(&p_book);
				break ;
			case 3:
				std::cout << "Bye!" << std::endl;
				break ;
			default:
				std::cout << "Wrong Option" << std::endl;
				break ;
		}
	} while (choice != 3);
}

int main (int argc, char **argv)
{
	PhoneBook	p_book;

	if (argc > 1 || argv[1])
	{
		std::cerr << "This program doesn't acept arguments" << std::endl;
		return (0);
	}
	show_menu(p_book);
	return (0);
}
