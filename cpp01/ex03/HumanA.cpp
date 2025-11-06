/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 21:02:40 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/17 21:19:37 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void	HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl; 
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA Constructor Called\n";
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor Called\n";
}