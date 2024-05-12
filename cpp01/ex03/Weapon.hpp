/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:25:22 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/12 20:45:45 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon ( std::string type);
        ~Weapon();
        const std::string   &getType( void );
		void	setType( std::string type );
};

#endif