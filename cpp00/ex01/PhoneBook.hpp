/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:19:17 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/28 23:46:53 by fede             ###   ########.fr       */
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
	void	save_contact(PhoneBook *p_book, int& oldest);
	void	show_contact(PhoneBook *p_book);
	Contact	new_contact(void);
	void	show_full_contact(Contact contact);

};
# endif