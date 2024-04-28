/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 23:18:52 by fede              #+#    #+#             */
/*   Updated: 2024/04/28 23:46:33 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "./PhoneBook.hpp"

Contact	PhoneBook::GetContact(int i)
{
    return contacts[i];
}
void PhoneBook::SetContact(Contact contact, int i)
{
    contacts[i] = contact;   
}

void	PhoneBook::save_contact(PhoneBook *p_book, int& oldest)
{
	for (int i = 0; i < 8; ++i)
	{
		if (p_book->GetContact(i).GetFirstName().empty()) {
			p_book->SetContact(p_book->new_contact(), i);
			std::cout << "Contact added" << std::endl;
			break;
		}
		if (i == 7)
		{
			p_book->SetContact(p_book->new_contact(), oldest);
			oldest++;
			if (oldest == 8)
                oldest = 0;
		}
	}
}

void	PhoneBook::show_contact(PhoneBook *p_book)
{
	int			num;
	std::string	index;
	std::string str;

	num = 0;
	std::cout << "---------------------------------------------"  << std::endl;
	std::cout << "|     Index|" << "  1st name|" << " Last name|" << "  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|"  << std::endl;
	for(int	i = 0; i < 8; i++)
	{
		std::cout << "|";
		str = std::to_string(i + 1);
		print_value(str);
		print_value(p_book->GetContact(i).GetFirstName());
		print_value(p_book->GetContact(i).GetLastName());
		print_value(p_book->GetContact(i).GetNickname());
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
		p_book->show_full_contact(p_book->GetContact(num - 1));
	else
		std::cout << std::endl << "Wrong index!" << std::endl << std::endl;
}
Contact	PhoneBook::new_contact(void)
{
	Contact contact;
	
	std::string str;
	std::cout << "First name:";
	std::getline(std::cin, str);
	contact.SetFirstName(str);
	std::cout << "Last name:";
	std::getline(std::cin, str);
	contact.setLastName(str);
	std::cout << "Nickname:";
	std::getline(std::cin, str);
	contact.setNickname(str);
	std::cout << "Phone number:";
	std::getline(std::cin, str);
	contact.SetPhoneNumber(str);
	std::cout << "Darkest secret:";
	std::getline(std::cin, str);
	contact.SetDarkestSecret(str);
	std::cout << std::endl;
	std::cout << "FN NEW: " << contact.GetFirstName() << std::endl;
	return (contact);
}

void	PhoneBook::show_full_contact(Contact contact)
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