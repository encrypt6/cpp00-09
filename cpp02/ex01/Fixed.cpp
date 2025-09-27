/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:36:30 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/27 17:22:44 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_fract = 8;

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return(_nb);
}

Fixed::Fixed() : _nb(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy) : _nb(copy._nb)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &copy)
		this->setRawBits(copy.getRawBits());

	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
