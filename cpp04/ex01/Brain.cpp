/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:47:40 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 10:45:11 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
}

Brain::Brain(const std::string seed)
{
	std::cout << "Brain Parameterized constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = seed;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignement operator constructor called\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}

const std::string &Brain::getIdea(int i)const
{
	static const std::string	empty = "";
	if (i < 0 || i >= 100)
		return (empty);
	return(_ideas[i]);
}

void Brain::setIdea(int i, const std::string &idea)
{
	if (i < 0 || i >= 100)
		return;
	_ideas[i] = idea;
}
