/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:28:38 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/29 11:40:55 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include <string>
#include <iostream>

std::string Contact::GetFirstName(void)
{
	return first_name;
}

std::string Contact::GetLastName(void)
{
	return last_name;
}

std::string Contact::GetNickname(void)
{
	return nickname;
}

std::string Contact::GetPhoneNumber(void)
{
	return phone_number;
}

std::string Contact::GetDarkestSecret(void)
{
	return darkest_secret;
}


void Contact::SetFirstName(std::string str)
{
	this->first_name = str;
}

void Contact::setLastName(std::string str)
{
	this->last_name = str;
}

void Contact::setNickname(std::string str)
{
	this->nickname = str;
}

void Contact::SetPhoneNumber(std::string str)
{
	this->phone_number = str;
}

void Contact::SetDarkestSecret(std::string str)
{
	this->darkest_secret = str;
}





