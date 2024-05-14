/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede <fede@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:15 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/14 18:18:28 by fede             ###   ########.fr       */
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


    public:
        Harl();
        ~Harl();
        void        complain( std:: string level );
};

#endif