/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:04:01 by elsikira          #+#    #+#             */
/*   Updated: 2025/04/16 12:33:25 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void	scream(std::string input)
{
	std::string::size_type i = 0;
	while (i < input.length())
	{
		std::cout << (char)std::toupper(input[i]);
		++i;
	}

}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			scream(argv[i]);
			++i;
		}
	}
	else
		scream("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	std::cout << std::endl;
	return (0);
}
