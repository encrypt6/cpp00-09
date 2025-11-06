/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:21:42 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/02 21:46:43 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class	ClapTrap
{
	protected:
		std::string	_name;
		long		_hitPoints;
		long		_energyPoints;
		long		_damagePoints;

	public:
		//orthodox canonical constructors
		ClapTrap();//default
		ClapTrap(std::string name); //parameterized
		ClapTrap(const ClapTrap &other);//copy construcctor
		ClapTrap &operator=(const ClapTrap &other); //copy assignement operator constructor
		virtual~ClapTrap();//destructor

		//must-have functions
		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amout);

		//my getters/setters
		bool				goodState(void) const;
		void				setName(const std::string name);
		const std::string	getName(void) const;
		long				getHitPoints(void)const;
		long				getEnergyPoints(void)const ;
		long				getDamagePoints(void) const;
		void				printInfos(void) const;

};

#endif
