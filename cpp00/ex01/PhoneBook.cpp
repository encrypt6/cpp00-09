/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 00:01:18 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/09 20:08:44 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

static std::string truncate(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return (str);
}

void PhoneBook::search() const
{
	if (count == 0)
	{
		std::cout << "There are no contacts to display.\n";
		return;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "|   Index  |First Name| Last Name| Nickname |\n";
	std::cout << "---------------------------------------------\n";
	for (int i = 0; i < count; ++i)
	{
		std::cout << "|"
				  << std::setw(10) << i << "|"
				  << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
				  << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
				  << std::setw(10) << truncate(contacts[i].getNickName()) << "|\n";
	}
	std::cout << "---------------------------------------------\n";

	//get input index
	std::string input;
	std::cout << "Enter an index to view details: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return;
	// Check input is digits only
	if (input.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cerr << "Invalid input. Index must be a number.\n";
		return;
	}

	int index = std::atoi(input.c_str());
	if (index < 0 || index >= count)
	{
		std::cerr << "Invalid index. Out of range.\n";
		return;
	}
    // display full contact
	std::cout << "📇 Contact Information:\n";
	std::cout << "First Name:     " << contacts[index].getFirstName() << "\n";
	std::cout << "Last Name:      " << contacts[index].getLastName() << "\n";
	std::cout << "Nick Name:      " << contacts[index].getNickName() << "\n";
	std::cout << "Phone Number:   " << contacts[index].getPhoneNumber() << "\n";
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << "\n";
}

void	PhoneBook::add(void)
{
	std::string firstName     = getPrompt("First Name");
	std::string lastName      = getPrompt("Last Name");
	std::string nickName      = getPrompt("Nick Name");
	std::string phoneNumber   = getPrompt("Phone Number");
	std::string darkestSecret = getPrompt("Darkest Secret");

	contacts[nextIndex].saveContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	//getAllPrompts();
	//a faire sans casser
	nextIndex = (nextIndex + 1) % 8;
	if (count < 8)
		count++;
	std::cout << "Contact added successfully!\n";
}

PhoneBook::PhoneBook(): count(0), nextIndex(0){}
