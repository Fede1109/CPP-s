/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:26:50 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/26 15:16:22 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:

	std::string GetFirstName(void);
	std::string GetLastName(void);
	std::string GetNickname(void);
	std::string GetPhoneNumber(void);
	std::string GetDarkestSecret(void);


	void SetFirstName(std::string str);
	void setLastName(std::string str);
	void setNickname(std::string str);
	void SetPhoneNumber(std::string str);
	void SetDarkestSecret(std::string str);

	Contact	new_contact(void);

};

# endif