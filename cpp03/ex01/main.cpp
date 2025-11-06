/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:03:38 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/28 17:32:31 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "iostream"

int	main(void)
{
	Fixed	a; //default constructor
	Fixed	const b(10); //int constructor
	Fixed	const c(42.42f); //float consructor
	Fixed	const d(b); //copy constructor

	a = Fixed(1234.4321f); //copy assignement operator constructor
	
	std::cout << "a is " << a << std::endl; //<< operator
	std::cout << "b is " << b << std::endl; // << operator
	std::cout << "c is " << c << std::endl; // << operator
	std::cout << "d is " << d << std::endl; // << operator 

	std::cout << "a is " << a.toInt() << " as integer" << std::endl; //<<operator
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;//<<operator
	std::cout << "c is " << c.toInt() << " as integer" << std::endl; //<<operator
	std::cout << "d is " << d.toInt() << " as integer" << std::endl; //<< operator
	return 0;
}
