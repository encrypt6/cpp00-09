/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:24:34 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/15 19:31:24 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombieFromHeap = newZombie("Coco");
	zombieFromHeap->announce();
	delete zombieFromHeap;

	//zombieFromStack
	randomChump("Nono");
}
