/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retro_phonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 00:01:18 by elsikira          #+#    #+#             */
/*   Updated: 2025/05/29 17:38:55 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"


/*std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	while (firstName.empty())
	{
		std::cout << "First Name ?\n";
		std::getline(std::cin, firstName);
		if (firstName.empty())
			std::cerr << "Error: First Name is empty\n";
	}

	while (lastName.empty())
	{
		std::cout << "Last Name ?\n";
		std::getline(std::cin, lastName);
		if (lastName.empty())
			std::cerr << "Error: Last Name is empty\n";
	}

	while (nickName.empty())
	{
		std::cout << "Nick Name ?\n";
		std::getline(std::cin, nickName);
		if (nickName.empty())
			std::cerr << "Error: Nick Name is empty\n";
	}
	
	while (phoneNumber.empty())
	{
		std::cout << "Phone Number ?\n";
		std::getline(std::cin, phoneNumber);
		if (phoneNumber.empty())
			std::cerr << "Error: Phone Number is empty\n";
	}

	while (darkestSecret.empty())
	{
		std::cout << "Darkest Secret ?\n";
		std::getline(std::cin, darkestSecret);
		if (darkestSecret.empty())
			std::cerr << "Error: Darkest Secret is empty\n";
	}
*/


static std::string	getPrompt(const std::string &fieldName)
{
	std::string	prompt;

	while (prompt.empty())
	{
		std::cout << fieldName << "?\n";
		std::getline(std::cin, prompt);
		if (prompt.empty())
			std::cerr << "Error: " << fieldName << " is empty\n";

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

	/*contacts[nextIndex].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	nextIndex = (nextIndex + 1) % 8;
	if (count < 8)
		count++;
	std::cout << "✅ Contact added successfully!\n";
	*/
}

	
int	main(void)
{
	PhoneBook	phonebook;
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
			phonebook.add();			

		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting retro_phonebook program ! Bye Bye !\n";
			break ;
		}
	}
}
