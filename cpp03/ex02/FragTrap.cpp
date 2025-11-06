/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:25:00 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/03 11:32:59 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap asks a high five\n";
}

void	FragTrap::attack(const std::string &target)
{
	if (this->goodState())
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_damagePoints << " points of damage!\n";
		this->_energyPoints--; //attacker looses energy in an attack
		this->printInfos();
	}
	else
		std::cout << this->_name << " cannot attack!\n";
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_damagePoints = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Parameterized constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_damagePoints = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap Copy constructor called\n";
	*this = other;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignement operator constructor called\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_damagePoints = other._damagePoints;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}
