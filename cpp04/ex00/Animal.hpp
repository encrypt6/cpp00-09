/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:23:38 by elsikira          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/03 21:18:08 by elsikira         ###   ########.fr       */
=======
/*   Updated: 2025/10/04 17:00:43 by elsikira         ###   ########.fr       */
>>>>>>> cfa7baff8be1303c2d9b1934f2deb93950bab7ff
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

<<<<<<< HEAD
class	Animal
{
	private:
		std::string	type;

	public:
		Animal();
		Animal(const std::string str);
		Animaloperator=
}
=======
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
>>>>>>> cfa7baff8be1303c2d9b1934f2deb93950bab7ff

#endif
