/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:44:57 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/04 17:01:17 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const std::string name) : Animal(name)
{
	std::cout << "Dog Parameterized constructor called\n";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy constructor called\n";
	*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignement operator constructor called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Ouaf\n";
}
