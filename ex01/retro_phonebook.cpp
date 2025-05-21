/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retro_phonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 00:01:18 by elsikira          #+#    #+#             */
/*   Updated: 2025/05/20 18:17:49 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "retro_phonebook.hpp"



int	main(void)
{
	std::string command; //equivalant to the char *command

	while (1)
	{
		std::cout <<"Please enter a command (ADD, SEARCH, EXIT)\n"; //equivalent to the printf
		std::getline(std::cin, command);

		if (std::cin.eof())
		{
			std::cout <<"\nEnd of file exiting\n";
			break ;
		}
		if (command == "ADD")
		{
				
			std::cout << "Hello ADD\n";

		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting retro_phonebook program ! Bye Bye !\n";
			break ;
		}
	}
}
