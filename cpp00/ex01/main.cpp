/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:37:08 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/26 14:18:59 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include "./Contact.hpp"
#include "./PhoneBook.hpp"

// int	check_empty(std::string& str, int flag);

//TODO: SPLIT FUNCTIONS AT THE END
void	show_full_contact(Contact contact)
{
	if (contact.getFirstName().empty())
	{
		std::cout << "Nothing to see here 👀" << std::endl;
		return ;
	}
	std::cout << "First name: ";
	std::cout << contact.getFirstName() << std::endl;
	std::cout << "Last name: ";
	std::cout << contact.getLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << contact.getNickname() << std::endl;
	std::cout << "Phone number: ";
	std::cout << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << contact.getDarkestSecret() << std::endl;
}
Contact	new_contact()
{
	Contact contact;
	
	std::string str;
	std::cout << "First name:";
	std::getline(std::cin, str);
	contact.setFirstName(str);
	std::cout << "Last name:";
	std::getline(std::cin, str);
	contact.setLastName(str);
	std::cout << "Nickname:";
	std::getline(std::cin, str);
	contact.setNickname(str);
	std::cout << "Phone number:";
	std::getline(std::cin, str);
	contact.setPhoneNumber(str);
	std::cout << "Darkest secret:";
	std::getline(std::cin, str);
	contact.setDarkestSecret(str);
	std::cout << std::endl;
	return (contact);
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

//? Necesario
/* int	check_empty(std::string& str, int flag)
{
	do
	{
		switch (flag)
		{
		case 1:
			std::cout << "Please introduce a first name:" << std::endl;
			break;
		case 2:
			std::cout << "Please introduce a last name:" << std::endl;
			break;
		case 3:
			std::cout << "Please introduce a nickname:" << std::endl;
			break;
		case 4:
			std::cout << "Please introduce a phone number:" << std::endl;
			break;
		case 5:
			std::cout << "Please introduce a Darkest secret:" << std::endl;
			break;
		default:
			break;
		}
	}while(str.empty());
	return (0);
}
 */
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
		print_value(p_book->contacts[i].getFirstName());
		print_value(p_book->contacts[i].getLastName());
		print_value(p_book->contacts[i].getNickname());
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
		if (p_book->contacts[i].getFirstName().empty()) {
			p_book->contacts[i] = new_contact();
			std::cout << "Contact added" << std::endl;
			break;
		}
		if (i == 7)
		{
			p_book->contacts[oldest] = new_contact();
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

void	create_menu()
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
	//std::string	str;
	if (argc > 1 || argv[1])
	{
		std::cerr << "This program doesn't acept arguments" << std::endl;
		return (0);
	}
	show_menu(p_book);
	return (0);
}
