/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:03:38 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/27 16:06:48 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "iostream"

int	main(void)
{
	Fixed a; //calls Default constructor
	Fixed b(a); //calls copy constructor : creates 'b' and takes 'a' value
	Fixed c;

	c = b; //calls copy assignement operator constructor

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
