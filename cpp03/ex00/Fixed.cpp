/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:36:30 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/30 15:16:16 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_fract = 8; //for 8bits set = 255 for the fractional part. 

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return(this->_nb);
}

Fixed::Fixed() : _nb(0) //default constructor to set _nb to 0
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) //other constructor to create a value and set it from another existing value
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed	&Fixed::operator=(const Fixed &other) //other assignement constructor : takes existing value and set it from another existing value
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->setRawBits(other.getRawBits()); //calls set function with get raw bit of the 
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
