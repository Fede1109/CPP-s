/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:37:08 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/25 17:22:47 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include "./Contact.hpp"
#include "./PhoneBook.hpp"

//TODO: SPLIT FUNCTIONS AT THE END
//TODO: If the user tries to add a 9th contact, replace the oldest one by the new one.
void	show_full_contact(Contact contact)
{
	if (contact.first_name.empty())
	{
		std::cout << "Nothing to see here 👀" << std::endl;
		return ;
	}
	std::cout << "First name: ";
	std::cout << contact.first_name << std::endl;
	std::cout << "Last name: ";
	std::cout << contact.last_name << std::endl;
	std::cout << "Nickname: ";
	std::cout << contact.nickname << std::endl;
	std::cout << "Phone number: ";
	std::cout << contact.phone_number << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << contact.darkest_secret << std::endl;
}
Contact	new_contact()
{
	Contact contact;
		
	std::cout << "First name:";
	std::cin >> contact.first_name;
	std::cout << "Last name:";
	std::cin >> contact.last_name;
	std::cout << "Nickname:";
	std::cin >> contact.nickname;
	std::cout << "Phone number:";
	std::cin >> contact.phone_number;
	std::cout << "Darkest secret:";
	std::cin >> contact.darkest_secret;
	std::cout << std::endl;
	return (contact);
}

void	print_value(std::string& str)
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

int	check_empty(std::string& str, int flag)
{
	do
	{
		switch (flag)
		{
		case 1:
			std::cout << "Please introcude a first name:" << std::endl;
			break;
		case 2:
			std::cout << "Please introcude a last name:" << std::endl;
			break;
		case 3:
			std::cout << "Please introcude a nickname:" << std::endl;
			break;
		case 4:
			std::cout << "Please introcude a phone number:" << std::endl;
			break;
		case 5:
			std::cout << "Please introcude a Darkest secret:" << std::endl;
			break;
		default:
			break;
		}
		
	}while(str.empty());
	return (0);
}

void	show_contact(PhoneBook p_book)
{
	int			num;
	std::string	index;
	std::string str;

	num = 0;
	std::cout << "---------------------------------------------"  << std::endl;
	std::cout << "|     Index|" << "  1st name|" << " Last name|" << " Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|"  << std::endl;
	for(int	i = 0; i < (int) sizeof(p_book.contacts) / (int) sizeof(p_book.contacts[0]); i++)
	{
		std::cout << "|";
		str = std::to_string(i + 1);
		print_value(str);
		print_value(p_book.contacts[i].first_name);
		print_value(p_book.contacts[i].last_name);
		print_value(p_book.contacts[i].nickname);
		std::cout << std::endl;
		if (i != 7)
			std::cout << "|----------|----------|----------|----------|"  << std::endl;
	}
	std::cout << "---------------------------------------------"  << std::endl;

	std::cout << "Select an index between 1 and 8: ";
	std::cin >> index;
	try
	{
		num = std::stoi(index);
	}
	catch(const std::exception& e)
	{
		std::cout << '\n' << "That was not a number!" << std::endl << std::endl;
	}	
	if (num > 0 && num < 9)
		show_full_contact(p_book.contacts[num - 1]);	
}

void	save_contact(PhoneBook *p_book)
{
	for (int i = 0; i < 8; ++i)
	{
		if (p_book->contacts[i].first_name.empty()) {
			p_book->contacts[i] = new_contact();
			std::cout << "Contact added" << std::endl;
			break;
		}
		if (i == 7)
			std::cout << "Phonebook is full. We'll replace the oldest one." << std::endl;
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

void	create_menu()
{
	std::cout << "TYPE AN OPTION:" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "ADD" << std::endl << "SEARCH" << std::endl << "EXIT" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Your option: ";
}

void	show_menu(std::string& str, PhoneBook p_book)
{
	int		choice;
	Contact contact;
	do
	{
		create_menu();
		std::cin >> str;
		if (std::cin.eof()==1)
			break ;
		choice = stringToInt(str);		
		switch (choice)
		{
			case 1:
				save_contact(&p_book);
				break ;
			case 2:
				show_contact(p_book);
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
	std::string	str;
	if (argc > 1 || argv[1])
	{
		std::cerr << "This program doesn't acept arguments" << std::endl;
		return (0);
	}
	show_menu(str, p_book);
	return (0);
}
