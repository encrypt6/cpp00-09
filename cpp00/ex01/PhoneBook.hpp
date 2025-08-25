/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:52:26 by elsikira          #+#    #+#             */
/*   Updated: 2025/08/25 17:33:35 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

class	PhoneBook
{
	public:
		PhoneBook();
		void	add();
		void	search();
	private:
		Contact	contacts[8];
		int		count;
		int		nextIndex;
};

