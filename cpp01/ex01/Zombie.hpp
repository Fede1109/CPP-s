/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:11:07 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/10 16:46:59 by fdiaz-gu         ###   ########.fr       */
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
    Zombie*	zombieHorde( int N, std::string name );
	void	announce( void );
	
        
};

#endif