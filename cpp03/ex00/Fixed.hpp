/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:08:51 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/27 17:13:38 by elsikira         ###   ########.fr       */
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
		Fixed();//default constructor = to initialize an object to default value
		Fixed(const Fixed &other);//copy constructor = to initialize a new object to the value of existing object (copy)
		Fixed &operator=(const Fixed &other);//copy assignement operator = assigns value of an object to another existing object
		~Fixed();//Destructor
		
		int		getRawBits(void) const; // returns the raw value of the nb
		void	setRawBits(int const raw); // sets the raw value to nb
};

#endif
