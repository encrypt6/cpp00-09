/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:20:03 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 12:02:30 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const std::string name);
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		~Dog();

		void				makeSound()const;

		void				setIdea(int i, const std::string &idea);
		const std::string	&getIdea(int i) const;
		const Brain			*brainPtr()const;

};

#endif
