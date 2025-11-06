/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:20:52 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/03 17:53:00 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		//orthodox canonical constructors
		FragTrap();//default
		FragTrap(std::string name); //parameterized
		FragTrap(const FragTrap &other);//copy construcctor
		FragTrap &operator=(const FragTrap &other); //copy assignement operator constructor
		~FragTrap();//destructor
		
		void	attack(const std::string &target);
		void	highFivesGuys(void);
};

#endif
