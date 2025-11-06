/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:33:36 by elsikira          #+#    #+#             */
/*   Updated: 2025/10/05 10:45:45 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class	Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(const std::string name);
		Brain(const Brain &other);
		Brain	&operator=(const Brain &other);
		~Brain();


		void				setIdea(int i, const std::string &idea);
		const std::string	&getIdea(int i) const;

};


#endif
