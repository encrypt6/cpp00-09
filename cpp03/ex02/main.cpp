/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:03:38 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/30 13:05:33 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << Fixed::min( a, b ) << std::endl;
	}

	{
		// test des operateurs arithmetique
		Fixed a(1);
		Fixed const b( Fixed( 2 ) );
		std::cout << " a * b = " << a * b << std::endl;
		std::cout << " a + b = " << a + b << std::endl;
		std::cout << " a - b = " << a - b << std::endl;
		std::cout << " a / b = " << a / b << std::endl;
	}

	return 0;
}
