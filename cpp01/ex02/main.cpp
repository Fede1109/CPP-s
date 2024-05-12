/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:14:57 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/05/12 11:14:58 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main (void)
{
    std::string str = "HI THSI IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;

    std::cout << &str << ": " << str << std::endl;
    std::cout << strPtr << ": " << *strPtr << std::endl;
    std::cout << &strRef << ": " << strRef << std::endl;
}