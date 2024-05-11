/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:24:18 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/11 12:36:53 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
		~Zombie();
		Zombie(std::string name);
        void	announce ( void );
		Zombie	*newZombie ( std::string name );
		void	randomChump ( std::string name );
};

	Zombie	*newZombie ( std::string name );
	void	randomChump ( std::string name );
#endif