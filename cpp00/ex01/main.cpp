/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:37:08 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/26 16:25:33 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "./Contact.hpp"
#include "./PhoneBook.hpp"

//TODO: SPLIT FUNCTIONS AT THE END
void	show_full_contact(Contact contact)
{
	if (contact.GetFirstName().empty())
	{
		std::cout << "Nothing to see here 👀" << std::endl;
		return ;
	}
	std::cout << "First name: ";
	std::cout << contact.GetFirstName() << std::endl;
	std::cout << "Last name: ";
	std::cout << contact.GetLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << contact.GetNickname() << std::endl;
	std::cout << "Phone number: ";
	std::cout << contact.GetPhoneNumber() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << contact.GetDarkestSecret() << std::endl;
}


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

void	show_contact(PhoneBook *p_book)
{
	int			num;
	std::string	index;
	std::string str;

	num = 0;
	std::cout << "---------------------------------------------"  << std::endl;
	std::cout << "|     Index|" << "  1st name|" << " Last name|" << "  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|"  << std::endl;
	for(int	i = 0; i < (int) sizeof(p_book->contacts) / (int) sizeof(p_book->contacts[0]); i++)
	{
		std::cout << "|";
		str = std::to_string(i + 1);
		print_value(str);
		print_value(p_book->contacts[i].GetFirstName());
		print_value(p_book->contacts[i].GetLastName());
		print_value(p_book->contacts[i].GetNickname());
		std::cout << std::endl;
		if (i != 7)
			std::cout << "|----------|----------|----------|----------|"  << std::endl;
	}
	std::cout << "---------------------------------------------"  << std::endl;

	std::cout << "Select an index between 1 and 8: ";
	std::getline(std::cin, str);
	index = str;
	try
	{
		num = std::stoi(index);
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "That was not a number!" << std::endl << std::endl;
	}	
	if (num > 0 && num < 9)
		show_full_contact(p_book->contacts[num - 1]);
	else
		std::cout << std::endl << "Wrong index!" << std::endl << std::endl;
}

void	save_contact(PhoneBook *p_book, int &oldest)
{
	for (int i = 0; i < 8; ++i)
	{
		if (p_book->contacts[i].GetFirstName().empty()) {
			p_book->contacts[i] = p_book->contacts[0].new_contact();
			std::cout << "Contact added" << std::endl;
			break;
		}
		if (i == 7)
		{
			p_book->contacts[oldest] = p_book->contacts[0].new_contact();
			oldest++;
			if (oldest == 8)
                oldest = 0;
		}
	}
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
				save_contact(&p_book, oldest);				
				break ;
			case 2:
				show_contact(&p_book);
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
