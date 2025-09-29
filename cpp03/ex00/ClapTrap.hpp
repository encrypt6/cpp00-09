/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:21:42 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/29 21:25:07 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
#define

class	ClapTrap
{
	private:
		std::string	_name;



	public:
		ClapTrap(_name);
		~ClapTrap();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amout);

}


#endif
