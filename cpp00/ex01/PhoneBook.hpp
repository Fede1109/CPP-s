/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:19:17 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/29 15:30:07 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "./Contact.hpp"
class PhoneBook
{
	private:
		Contact contacts[8];

	public:
	Contact	GetContact(int i);
	void	SetContact(Contact contact, int i);
	void	save_contact(int& oldest);
	void	show_contact(void);
	Contact	new_contact(void);
	void	show_full_contact(Contact contact);

};
# endif