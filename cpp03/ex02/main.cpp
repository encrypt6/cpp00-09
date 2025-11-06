/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:24:35 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/03 18:07:28 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//#include "ScavTrap.hpp"


int	main(void){
	
	{
		/* PolyMorphism */
		ClapTrap	*a = new FragTrap("AlphaScavTrap");

		a->printInfos();

		/* Second Test */
		FragTrap	b("BetaScavTrap");
		
		b.printInfos();
		delete	a;
	
		/* Third Test */
		FragTrap	c(b);
	
		c.printInfos();
	}
	{
		/*Fight */
		ScavTrap	a("ScavTrap");
		FragTrap	b("FragTrap");

		while (a.goodState() && b.goodState()) {
			a.attack(b.getName());
			b.takeDamage(a.getDamagePoints());
			b.attack(a.getName());
			a.takeDamage(b.getDamagePoints());
			b.beRepaired(1);
			b.highFivesGuys();
		}
	}
	return (0);
}

