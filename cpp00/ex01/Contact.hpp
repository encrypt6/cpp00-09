/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:52:47 by elsikira          #+#    #+#             */
/*   Updated: 2025/07/04 20:11:56 by elsikira         ###   ########.fr       */
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
		Contact();
		~Contact();
		void	saveContact(std::string &firstName,
								std::string &lastName,
								std::string &nickName,
								std::string &phoneNumber,
								std::string &darkestSecret);
};
