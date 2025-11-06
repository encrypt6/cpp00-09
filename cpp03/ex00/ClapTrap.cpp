/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:29:11 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/02 21:41:56 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void	ClapTrap::printInfos(void) const
{
	std::cout << this->_name << " has " << this->_hitPoints << " hit points left!\n";
	std::cout << this->_name << " has " << this->_energyPoints << " energy points left!\n";
	std::cout << this->_name << " has " << this->_damagePoints << " damage points!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << this->_name << " has repaired themself and has " << this->_hitPoints << " hit points left!\n";
	}
	else
		std::cout << this->_name << " cannot repair themself!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << this->_name << " has taken " << amount << " point of damages!\n";
		if (this->_hitPoints > 0)
			this->printInfos();
		else
			std::cout << this->_name << " is dead!\n"; 
	}
	else
		std::cout << this->_name << " is already dead !\n";

}

void	ClapTrap::attack(const std::string &target)
{
	if (this->goodState())
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damagePoints << " points of damage!\n";
		this->_energyPoints--; //attacker looses energy in an attack
		this->printInfos();
	}
	else
		std::cout << this->_name << " cannot attack!\n";
}

bool	ClapTrap::goodState(void) const
{
	return(this->_energyPoints > 0 && this->_hitPoints > 0);
}

void	ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

const	std::string	ClapTrap::getName() const
{
	return(this->_name);
}

long	ClapTrap::getHitPoints() const
{
	return(this->_hitPoints);
}

long	ClapTrap::getEnergyPoints() const
{
	return(this->_energyPoints);
}

long	ClapTrap::getDamagePoints() const
{
	return(this->_damagePoints);
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_damagePoints = 0;
}

ClapTrap::ClapTrap(const std::string name) : _name(name)
{
	std::cout << "Parameterized constructor called\n";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_damagePoints = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignement operator constructor called\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_damagePoints = other._damagePoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}
