/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:01:14 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 11:53:55 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// 1) Build an array of Animal* (half Dog, half Cat)
	std::cout << "BUILDING AN ARRAY OF ANIMALS\n";
	const int N = 6;
	Animal* zoo[N];

	for (int i = 0; i < N/2; ++i)
		zoo[i] = new Dog();
	for (int i = N/2; i < N; ++i)
		zoo[i] = new Cat();

    // 2) polymorphism
	std::cout << "\nPOLYMORPHISM TEST\n";
	for (int i = 0; i < N; ++i)
	{
		std::cout << zoo[i]->getType() << ": ";
		zoo[i]->makeSound();
	}

    // 3) deep copy test (Dog)
	std::cout << "\n DOG DEEP COPY TEST\n";
	Dog d1;
	d1.setIdea(0, "Catch the ball");
	Dog d2 = d1;               // copy-construct (deep)
	d1.setIdea(0, "Guard the house");

	std::cout << "d1 idea[0] = " << d1.getIdea(0) << "\n";
	std::cout << "d2 idea[0] = " << d2.getIdea(0) << "  (should be 'Catch the ball')\n";
	std::cout << "Brain addresses: d1=" << d1.brainPtr() << " d2=" << d2.brainPtr() << "\n";

	// 4) Deep copy test (Cat)
	std::cout << "\n CAT DEEP COPY TEST\n";
	Cat c1;
	c1.setIdea(0, "Nap on keyboard");
	Cat c2;
	c2 = c1;                    // copy-assign (deep)
	c1.setIdea(0, "Chase laser");

	std::cout << "c1 idea[0] = " << c1.getIdea(0) << "\n";
	std::cout << "c2 idea[0] = " << c2.getIdea(0) << "  (should be 'Nap on keyboard')\n";
	std::cout << "Brain addresses: c1=" << c1.brainPtr() << " c2=" << c2.brainPtr() << "\n";

    // 5) Clean up (delete as Animals → virtual dtor ensures correct order)
	std::cout << "\n DESTRUCTION OF OBJECTS\n";
	for (int i = 0; i < N; ++i)
		delete zoo[i];

	return 0;
}

