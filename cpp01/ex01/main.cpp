/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:24:34 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/15 20:13:20 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;

	Zombie	*horde = zombieHorde(N, "Coco");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	//delete array horde = all zombies are deleted
	delete[] horde;
}
