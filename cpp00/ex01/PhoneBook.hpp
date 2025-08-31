/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:52:26 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/01 00:26:43 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
class	PhoneBook
{
	public:
		PhoneBook();
		void	add();
		void	search() const;
	private:
		Contact	contacts[8];
		int		count;
		int		nextIndex;
};
#endif
