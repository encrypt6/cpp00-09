/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:20:03 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/04 17:01:25 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string name);
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		~Dog();

		void				makeSound()const;
};

#endif
