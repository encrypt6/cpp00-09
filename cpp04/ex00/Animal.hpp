/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:23:38 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/04 17:00:43 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);
		virtual	~Animal();

		virtual void	makeSound() const;
		const std::string	getType()const;
};

#endif
