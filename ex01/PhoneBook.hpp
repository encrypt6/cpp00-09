/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:52:26 by elsikira          #+#    #+#             */
/*   Updated: 2025/05/29 14:34:13 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		count;
		int		nextIndex;

	public:
		void	add();
};

