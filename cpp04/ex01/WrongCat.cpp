/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:10:05 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/04 17:24:30 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor called\n";
}

WrongCat::WrongCat(const std::string name) : WrongAnimal(name)
{
	std::cout << "WrongCat Parameterized constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat Copy constructor called\n";
	*this = other;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy assignement operator constructor called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}

void	WrongCat::makeSound()const
{
	std::cout << "WrongCat Miaou\n";
}

const std::string	WrongCat::getType() const
{
	return(this->_type);	
}
