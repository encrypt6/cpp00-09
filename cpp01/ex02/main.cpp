/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 20:28:27 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/15 20:58:10 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Memory address of string is : " << &string << std::endl;
	std::cout << "Memory address held by stringPTR is : " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF is : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string is : " << string << std::endl;
	std::cout << "Value pointed to by stringPTR is : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF is : " << stringREF << std::endl;
}
