/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retro_phonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 00:01:18 by elsikira          #+#    #+#             */
/*   Updated: 2025/06/26 19:18:14 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"


static bool	isDigits(const std::string &str)
{
	size_t	i;

	i = 0;
	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return (false);
		++i;
	}
	return (!str.empty());
}

static std::string	getPrompt(const std::string &fieldName)
{
	std::string	prompt;

	while (prompt.empty() && !std::cin.eof())
	{
		std::cout << fieldName << "?\n";
		if (!std::getline(std::cin, prompt))
		{
			if (std::cin.eof())
				return ("");
			else
			{
				std::cin.clear();
				std::cerr << "Error: " << fieldName << " is empty\n";
				continue;
			}
		}
		else if (prompt.empty())
		{
			std::cerr << "Error : " << fieldName << " is empty\n";
			continue;
		}
		if (fieldName == "Phone Number" && !isDigits(prompt))
		{
			if (!prompt.empty())
			{
				prompt.clear();
				std::cerr << "Error : only digits are accepted.\n";
			}
			continue;
		}
	}
	return (prompt);
}

void PhoneBook::add(void)
{
	std::string firstName     = getPrompt("First Name");
	std::string lastName      = getPrompt("Last Name");
	std::string nickName      = getPrompt("Nick Name");
	std::string phoneNumber   = getPrompt("Phone Number");
	std::string darkestSecret = getPrompt("Darkest Secret");

	contacts[nextIndex].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	nextIndex = (nextIndex + 1) % 8;
	if (count < 8)
		count++;
	std::cout << "Contact added successfully!\n";
}

	
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
		else if (command == "EXIT")
		{
			std::cout << "Exiting retro_phonebook program ! Bye Bye !\n";
			break ;
		}
	}
}
