/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:52:47 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/01 00:34:59 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
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
		void	saveContact(std::string &firstName,
								std::string &lastName,
								std::string &nickName,
								std::string &phoneNumber,
								std::string &darkestSecret);
		std::string getFirstName() const;
    	std::string getLastName() const;
    	std::string getNickName() const;
    	std::string getPhoneNumber() const;
    	std::string getDarkestSecret() const;
};
#endif
