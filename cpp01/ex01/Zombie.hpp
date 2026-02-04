/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:17:46 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/15 21:07:03 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		//Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
