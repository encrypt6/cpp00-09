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

	//prompt
	while (1)
	{
		//check if empty
		if (!std::cin.eof())
			std::cout <<"Please enter a command (ADD, SEARCH, EXIT)\n"; //equivalent to the printf

		//gets the input line 'command'
		std::getline(std::cin, command);

		//check if ctrlD
		if (std::cin.eof())
		{
			std::cout <<"\nEnd of file, exiting\n";
			break ;
		}
		//call of ADD function in the PhoneBook class
		if (command == "ADD")
		{
			phonebook.add();			
			
		}
		//call of SEARCH function in the PhoneBook class
		else if (command == "SEARCH")
		{
			//get list of contacts and print them in search funct*
			phonebook.search();
		}

		else if (command == "EXIT")
		{
			std::cout << "Exiting retro_phonebook program ! Bye Bye !\n";
			break ;
		}
	}
}
