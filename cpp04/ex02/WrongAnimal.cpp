/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:16:56 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/04 17:26:06 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string name) : _type(name)
{
	std::cout << "WrongAnimal Parameterized constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy constructor called\n";
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy assignement operator constructor called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "Some WrongAnimal sound\n";
}

const std::string	WrongAnimal::getType() const
{
	return(this->_type);	
}
