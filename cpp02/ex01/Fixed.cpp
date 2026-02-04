/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:36:30 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/28 17:31:38 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fract = 8;

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

int	Fixed::getRawBits(void) const
{
	return(_nb);
}

Fixed::Fixed() : _nb(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
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

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called\n";
	_nb = static_cast<int>(roundf(value * (1 << _fract))); // roundf garde uniquement la partie entiere (arrondit)
}															

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called\n";
	_nb = value << _fract; //bitshift
}

int		Fixed::toInt(void) const
{
	return _nb >> _fract; //bitshitf
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_nb) / (1 << _fract)); 
}

std::ostream	&operator<<(std::ostream &os, const Fixed &objectToPrint)
{
	os << objectToPrint.toFloat();
	return (os);
}
