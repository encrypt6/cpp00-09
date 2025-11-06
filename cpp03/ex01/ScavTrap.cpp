/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:25:00 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/02 20:48:27 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is now in Gate keeper mode\n";
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->goodState())
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damagePoints << " points of damage!\n";
		this->_energyPoints--; //attacker looses energy in an attack
		this->printInfos();
	}
	else
		std::cout << this->_name << " cannot attack!\n";
}


ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damagePoints = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Parameterized constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damagePoints = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy constructor called\n";
	*this = other;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignement operator constructor called\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_damagePoints = other._damagePoints;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}
