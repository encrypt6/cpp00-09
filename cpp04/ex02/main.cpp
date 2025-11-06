/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:01:14 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 12:14:36 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "CLASSIC TEST\n";
	const int N = 6;
	AAnimal* zoo[N];

	for (int i = 0; i < N/2; ++i)
		zoo[i] = new Dog();
	for (int i = N/2; i < N; ++i)
		zoo[i] = new Cat();

	for (int i = 0; i < N; ++i)
	{
		std::cout << zoo[i]->getType() << ": ";
		zoo[i]->makeSound();
	}

	for (int i = 0; i < N; ++i)
		delete zoo[i];

	std::cout << "\nUNCOMMENT 'AAnimal a' IN THE MAIN TO TEST\n";
//	AAnimal	a;

	return 0;
}
