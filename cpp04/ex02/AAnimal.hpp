/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:23:38 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 11:58:03 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class	AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string name);
		AAnimal(const AAnimal &other);
		AAnimal	&operator=(const AAnimal &other);
		virtual	~AAnimal();

		virtual void	makeSound() const = 0; //= pure virtual, instantiation impossible
		const std::string	getType()const;
};

#endif
