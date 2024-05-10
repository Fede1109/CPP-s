/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:24:18 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/10 16:03:35 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		std::string	getName(void);
		void	setName(std::string str);
        void			announce ( void );
		static Zombie	*newZombie ( std::string name );
		void			randomChump ( std::string name );
};



#endif