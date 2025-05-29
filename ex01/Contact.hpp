/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:52:47 by elsikira          #+#    #+#             */
/*   Updated: 2025/05/28 15:56:39 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		void	createContact(std::string firstName,
								std::string lastName,
								std::string nickName,
								std::string darkestSecret);
};
