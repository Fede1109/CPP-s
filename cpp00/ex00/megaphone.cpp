/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:34:46 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/04/24 12:26:54 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{	
		for (size_t j = 0; j < strlen(argv[i]); j++)
		{			
			if (isalpha(argv[i][j]))
				std::cout << (char) toupper(argv[i][j]);
    		else
				std::cout << argv[i][j];				
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}

