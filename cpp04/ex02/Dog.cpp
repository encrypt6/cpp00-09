/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:44:57 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 12:01:43 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/********************************CONSTRUCTORS*********************************/
Dog::Dog() : AAnimal("Dog"), _brain(new Brain())
{
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const std::string name) : AAnimal(name), _brain(new Brain())
{
	std::cout << "Dog Parameterized constructor called\n";
}

Dog::Dog(const Dog &other) : AAnimal(other), _brain(0)
{
	std::cout << "Dog Copy constructor called\n";
	if (other._brain)
		_brain = new Brain(*other._brain);
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignement operator constructor called\n";
	if (this != &other)
	{
		AAnimal::operator=(other);
		this->_type = other._type;
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

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete _brain;
}

/********************************MEMBER FUNCTIONS******************************/
void Dog::makeSound() const
{
	std::cout << "Ouaf\n";
}

const std::string &Dog::getIdea(int i)const
{
	return (_brain->getIdea(i));
}

void Dog::setIdea(int i, const std::string &idea)
{
	if (_brain)
		_brain->setIdea(i, idea);
}

const Brain *Dog::brainPtr()const
{
	return(_brain);
}
