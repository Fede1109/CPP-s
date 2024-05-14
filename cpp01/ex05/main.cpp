/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:15:31 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/14 15:43:25 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
    Harl harl1;

    harl1.complain("DEBUG");    
    harl1.complain("INFO");
    harl1.complain("ERROR");
    harl1.complain("WARNING");
    harl1.complain("");
    return (0);
}