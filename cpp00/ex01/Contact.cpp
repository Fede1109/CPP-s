/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:28:38 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/26 14:35:38 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

std::string Contact::getFirstName(void)
	{
		return first_name;
	}
	
	std::string Contact::getLastName(void)
	{
		return last_name;
	}
	
	std::string Contact::getNickname(void)
	{
		return nickname;
	}
	
	std::string Contact::getPhoneNumber(void)
	{
		return phone_number;
	}
	
	std::string Contact::getDarkestSecret(void)
	{
		return darkest_secret;
	}
	

	void Contact::setFirstName(std::string str)
	{
		first_name = str;
	}
	
	void Contact::setLastName(std::string str)
	{
		last_name = str;
	}
	
	void Contact::setNickname(std::string str)
	{
		nickname = str;
	}
	
	void Contact::setPhoneNumber(std::string str)
	{
		phone_number = str;
	}
	
	void Contact::setDarkestSecret(std::string str)
	{
		darkest_secret = str;
	}