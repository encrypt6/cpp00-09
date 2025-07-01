/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:52:47 by elsikira          #+#    #+#             */
/*   Updated: 2025/07/01 20:27:46 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

class	Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		void	saveContact(std::string firstName,
								std::string lastName,
								std::string nickName,
								std::string phoneNumber,
								std::string darkestSecret);
};
