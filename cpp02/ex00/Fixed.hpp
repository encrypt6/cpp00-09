/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:08:51 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/25 20:13:15 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private:
		int					_nb;
		static const int	_fract;	
	public:
		//default constructor = to initialize an object to default values
		Fixed() : _nb(0)
		{
			std::cout << "Default Constructor called\n";
		}

		int		getRawBits(void) const;
		
		//copy constructor = to initialize a new object to the value of existing object
		Fixed(const Fixed &copy) : _nb(copy._nb)
		{
			std::cout << "Copy Constructor called\n";
		}
		//copy assignement operator = assigns value of an object to another existing object
		Fixed &operator=(const Fixed &copy);
		//void	setRawBits(int const raw);

};

#endif
