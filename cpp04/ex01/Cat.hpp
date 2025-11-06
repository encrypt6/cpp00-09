/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:24:56 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 11:47:53 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const std::string name);
		Cat(const Cat &other);
		Cat	&operator=(const Cat &other);
		~Cat();

		void	makeSound()const;

		void				setIdea(int i, const std::string &idea);
		const std::string	&getIdea(int i) const;
		const Brain			*brainPtr()const;
};

#endif
