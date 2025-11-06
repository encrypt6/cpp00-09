/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 21:02:45 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/17 21:47:14 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack() const
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl; 
}

HumanB::HumanB(const std::string &name) : name(name)
{
	std::cout << "HumanB Constructor Called\n";
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor Called\n";
}