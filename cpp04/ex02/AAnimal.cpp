/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:39:35 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 12:06:08 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	std::cout << "AAnimal Default constructor called\n";
}

AAnimal::AAnimal(const std::string name) : _type(name)
{
	std::cout << "AAnimal Parameterized constructor called\n";
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal Copy constructor called\n";
	*this = other;
}

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal Copy assignement operator constructor called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called\n";
}

void AAnimal::makeSound() const
{
	std::cout << "Some AAnimal sound\n";
}

const std::string	AAnimal::getType() const
{
	return(this->_type);	
}
