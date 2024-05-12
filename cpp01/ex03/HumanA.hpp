/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:20:54 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/12 22:59:23 by fede             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &weap;
        std::string name;
    public:
        HumanA( std::string name, Weapon &weapon);
        ~HumanA();
        void    attack( void );
};

