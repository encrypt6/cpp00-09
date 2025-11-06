/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:39:35 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/04 17:01:05 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal(const std::string name) : _type(name)
{
	std::cout << "Animal Parameterized constructor called\n";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy constructor called\n";
	*this = other;
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Animal Copy assignement operator constructor called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

void Animal::makeSound() const
{
	std::cout << "Some Animal sound\n";
}

const std::string	Animal::getType() const
{
	return(this->_type);	
}
