/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2120/11/09 04:33:41 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/22 20:00:04 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "searchReplace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "This program needs 3 arguments\n";
		return (1);
	}
	std::ifstream	infile(argv[1]);
	if (!(infile))
	{
		std::cerr << "This file does not exist\n";
		return (1);
	}

	std::ofstream	outfile ((std::string(argv[1]) + ".replace").c_str());

	searchReplace(argv[2], argv[3], infile, outfile); //replaces every occurence of argv[2] with argv[3] in infile 
}
//s1 = docteur et s2 = teur
