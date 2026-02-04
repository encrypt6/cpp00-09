/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:01:14 by elsikira          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/03 20:23:18 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int	main(void)
{
	Animal	a;
=======
/*   Updated: 2025/10/04 17:29:56 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "TEST 1\n\n";
	{
		const Animal* meta = new Animal("Animal");
		const Animal* j = new Dog("Dog");
		const Animal* i = new Cat("Cat");

		std::cout << i->getType() << ": ";
		i->makeSound(); //will output the cat sound!
		std::cout << j->getType() << ": ";
		j->makeSound();
		std::cout << meta->getType() << ": ";
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
	}

	std::cout << "\nTEST 2\n\n";

	{
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the animal sound!

		delete i;
	}
	return 0;
>>>>>>> cfa7baff8be1303c2d9b1934f2deb93950bab7ff
}
