/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:03:53 by elsikira          #+#    #+#             */
/*   Updated: 2025/08/31 23:58:47 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string command; //equivalant to the char *command

	while (1)
	{
		if (!std::cin.eof())
			std::cout <<"Please enter a command (ADD, SEARCH, EXIT)\n"; //equivalent to the printf
		std::getline(std::cin, command);

		if (std::cin.eof())
		{
			std::cout <<"\nEnd of file, exiting\n";
			break ;
		}
		if (command == "ADD")
		{
			phonebook.add();			
			
		}
		else if (command == "SEARCH")
		{
			phonebook.search();
			//get list of contacts and print them in search funct*
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting retro_phonebook program ! Bye Bye !\n";
			break ;
		}
	}
}
