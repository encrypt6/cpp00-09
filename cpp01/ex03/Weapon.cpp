/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 21:02:14 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/17 21:35:43 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

void				Weapon::setType(const std::string &newType)
{
	type = newType;
}

const std::string	&Weapon::getType()const
{
	return(type);
}

Weapon::Weapon(const std::string &type) : type(type)
{
	std::cout << "Weapon Constructor called\n";
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor called\n";
}
