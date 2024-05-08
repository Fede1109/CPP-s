/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 23:18:52 by fede              #+#    #+#             */
/*   Updated: 2024/05/08 14:07:17 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include "./PhoneBook.hpp"

Contact	PhoneBook::GetContact(int i)
{
    return contacts[i];
}
void PhoneBook::SetContact(Contact contact, int i)
{
    contacts[i] = contact;   
}

void	PhoneBook::save_contact(int& oldest)
{
	for (int i = 0; i < 8; ++i)
	{
		if (this->GetContact(i).GetFirstName().empty()) {
			this->SetContact(this->new_contact(), i);
			std::cout << "Contact added" << std::endl;
			break;
		}
		if (i == 7)
		{
			this->SetContact(this->new_contact(), oldest);
			oldest++;
			if (oldest == 8)
                oldest = 0;
		}
	}
}

void	PhoneBook::show_contact(void)
{
	int			num;
	std::string	index;
	std::string str;
	std::stringstream s1;

	num = 0;
	std::cout << "---------------------------------------------"  << std::endl;
	std::cout << "|     Index|" << "  1st name|" << " Last name|" << "  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|"  << std::endl;
	for(int	i = 0; i < 8; i++)
	{
		std::cout << "|"; 
		s1.str("");
        s1.clear();   
		s1 << i + 1;
		str = s1.str();
		print_value(str);
		print_value(this->GetContact(i).GetFirstName());
		print_value(this->GetContact(i).GetLastName());
		print_value(this->GetContact(i).GetNickname());
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
		std::stringstream ss(index);
		ss >> num;
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << "That was not a number!" << std::endl << std::endl;
	}	
	if (num > 0 && num < 9)
		this->show_full_contact(this->GetContact(num - 1));
	else
		std::cout << std::endl << "Wrong index!" << std::endl << std::endl;
}
Contact	PhoneBook::new_contact(void)
{
	Contact contact;
	
	std::string str;
	do
	{
		std::cout << "First name:";
		std::getline(std::cin, str);
	}while(str.empty());		
	contact.SetFirstName(str);
	do
	{
		std::cout << "Last name:";
		std::getline(std::cin, str);
	}while(str.empty());
	contact.setLastName(str);
	do
	{		
		std::cout << "Nickname:";
		std::getline(std::cin, str);
	}while(str.empty());	
	contact.setNickname(str);
	do
	{				
		std::cout << "Phone number:";
		std::getline(std::cin, str);
	}while(str.empty());
	contact.SetPhoneNumber(str);
	do
	{				
		std::cout << "Darkest secret:";
		std::getline(std::cin, str);
	}while(str.empty());	
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