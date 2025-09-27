/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:08:51 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/27 17:33:58 by elsikira         ###   ########.fr       */
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
		//default constructor = to initialize an object to default values
		Fixed();
		
		//copy constructor = to initialize a new object to the value of existing object
		Fixed(const Fixed &copy);
		
		//copy assignement operator = assigns value of an object to another existing object
		Fixed	&operator=(const Fixed &copy);
		
		Fixed	

		//Destructor
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
