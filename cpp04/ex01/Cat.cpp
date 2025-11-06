/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:46:10 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 11:47:31 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>


/********************************CONSTRUCTORS*********************************/
Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat Default constructor called\n";
}

Cat::Cat(const std::string name) : Animal(name), _brain(new Brain())
{
	std::cout << "Cat Parameterized constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other), _brain(0)
{
	std::cout << "Cat Copy constructor called\n";
	if (other._brain)
		_brain = new Brain(*other._brain);
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignement operator constructor called\n";
	if (this != &other)
	{
		Animal::operator=(other);
		if (_brain)
		{
			delete (_brain);
			_brain = 0;
		}
		if (other._brain)
			_brain = new Brain(*other._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete _brain;
}

/********************************MEMBER FUNCTIONS******************************/
void	Cat::makeSound()const
{
	std::cout << "Miaou\n";
}

const std::string &Cat::getIdea(int i)const
{
	return (_brain->getIdea(i));
}

void Cat::setIdea(int i, const std::string &idea)
{
	if (_brain)
		_brain->setIdea(i, idea);
}

const Brain *Cat::brainPtr()const
{
	return(_brain);
}
