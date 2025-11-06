/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:36:30 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/30 18:42:19 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <stdexcept>

const int	Fixed::_fract = 8;

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

int	Fixed::getRawBits(void) const
{
	return(this->_nb);
}

Fixed::Fixed() : _nb(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) : _nb(other._nb)
{
	std::cout << "Copy constructor called\n";
	//*this = other; //toremove ?
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->setRawBits(other.getRawBits());

	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called\n";
	this->_nb = static_cast<int>(roundf(value * (1 << _fract)));
}

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called\n";
	this->_nb = value << _fract;
}

// had-hoc

int		Fixed::toInt(void) const
{
	return this->_nb >> _fract;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_nb) / (1 << _fract));
}

std::ostream	&operator<<(std::ostream &os, const Fixed &objectToPrint)
{
	os << objectToPrint.toFloat();
	return (os);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return(this->_nb > other._nb);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return(this->_nb < other._nb);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return(this->_nb >= other._nb);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return(this->_nb <= other._nb);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return(this->_nb != other._nb);
	
}

bool	Fixed::operator==(const Fixed &other) const
{
	return(this->_nb == other._nb);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	result;

	long	tmp = static_cast<long>(this->_nb) * static_cast<long>(other._nb);
	result.setRawBits(static_cast<int>(tmp >> _fract));
	return (result);
}//rescaling and long type avoids overflow

Fixed	Fixed::operator/(const Fixed &other) const
{
	if (other._nb == 0)
		throw std::runtime_error("Division by 0 is undefined\n");
	Fixed	result;
	long	tmp = (static_cast<long>(this->_nb) << _fract) / other._nb;
	result.setRawBits(static_cast<int>(tmp));
	return (result);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(this->_nb + other._nb);
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(this->_nb - other._nb);
	return (result);
}

Fixed	&Fixed::operator++()
{
	++this->_nb;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++this->_nb;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	--this->_nb;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--this->_nb;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed		&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed		&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
