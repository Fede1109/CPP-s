/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:51:48 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/14 15:35:31 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <sstream>
#include <string>
#include <map>

class Harl
{
	private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        typedef void(Harl::*ft_ptr)();
        std::map <std::string, ft_ptr> mp;


    public:
        Harl();
        ~Harl();
        void        complain( std:: string level );
};

#endif