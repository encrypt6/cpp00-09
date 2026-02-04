/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 21:01:20 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/17 20:33:16 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA
{
	private:
		const std::string	name;
		Weapon				&weapon;

	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		void	attack() const;
};

#endif
