/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 21:02:31 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/17 21:38:07 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon
{
	private:
		std::string type;
	public:
		Weapon(const std::string &type);
		~Weapon();
		const std::string	&getType() const;
		void				setType(const std::string &newType); //uses new value as parameter and sets type
};

#endif
