/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:20:52 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/02 20:33:43 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		//orthodox canonical constructors
		ScavTrap();//default
		ScavTrap(std::string name); //parameterized
		ScavTrap(const ScavTrap &other);//copy construcctor
		ScavTrap &operator=(const ScavTrap &other); //copy assignement operator constructor
		~ScavTrap();//destructor
		
		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif
