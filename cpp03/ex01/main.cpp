/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:24:35 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/02 21:51:44 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	
	{
		/* polymorphism*/
		ClapTrap	*a = new ScavTrap("AlphaScavTrap");

		a->printInfos();
		a->attack("Override test");

		/* Second Test */
		ScavTrap	b("BetaScavTrap");
		
		b.printInfos();
		delete	a;
	
		/* Third Test */
		ScavTrap	c(b);
	
		c.printInfos();
	}
	{
		/*Fight Test here */
		ScavTrap	a("AlphaScav");
		ScavTrap	b("BetaScav");
		ScavTrap	c;

		while (a.goodState() && b.goodState())
		{
			a.attack(b.getName());
			a.takeDamage(b.getDamagePoints());
			b.attack(a.getName());
			b.takeDamage(a.getDamagePoints());
			b.beRepaired(1);
		}
		a.guardGate();
		b.guardGate();
	}
	return (0);
}

