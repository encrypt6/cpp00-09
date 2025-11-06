/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:08:51 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/30 13:08:09 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>

class	Fixed
{
	private:
		int					_nb;
		static const int	_fract;	
	public:
		Fixed(); //default constructor //Rule of Three
		
		Fixed(const int		value); //constant int parameter constructor
		Fixed(const float	value); //constant float parameter constructor

		Fixed(const Fixed &copy); //copy constructor //Rule of Three
		Fixed	&operator=(const Fixed &copy); //copy assignement operator constructor //Rule of Three
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed &copy) const;
		bool	operator<(const Fixed &copy) const;
		bool	operator>=(const Fixed &copy) const;
		bool	operator<=(const Fixed &copy) const;
		bool	operator==(const Fixed &copy) const;
		bool	operator!=(const Fixed &copy) const;


		Fixed	operator*(const Fixed &copy) const;
		Fixed	operator/(const Fixed &copy) const;
		Fixed	operator+(const Fixed &copy) const;
		Fixed	operator-(const Fixed &copy) const;

		
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		static Fixed	&min(Fixed &a, Fixed &b);
		static const  Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const  Fixed	&max(const Fixed &a, const Fixed &b);

};

std::ostream	&operator<<(std::ostream &os, const Fixed &f); //prints float form

#endif
