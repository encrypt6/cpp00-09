/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:24:35 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/02 21:44:57 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	
	ClapTrap	trap[2] = {ClapTrap("AlphaTrap"), ClapTrap("BetaTrap")};

	while (trap[0].goodState() && trap[1].goodState())
	{
		trap[0].attack(trap[1].getName());
		trap[1].takeDamage(trap[0].getDamagePoints());
		trap[1].beRepaired(1);
	}
	trap[0].attack(trap[1].getName());
	trap[0].beRepaired(1);
	return (0);
}