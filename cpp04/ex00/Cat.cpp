/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:46:10 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/04 17:01:42 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat Default constructor called\n";
}

Cat::Cat(const std::string name) : Animal(name)
{
	std::cout << "Cat Parameterized constructor called\n";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy constructor called\n";
	*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignement operator constructor called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
}

void	Cat::makeSound()const
{
	std::cout << "Miaou\n";
}