/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchReplace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2120/11/09 09:01:51 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/22 20:21:31 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "searchReplace.hpp"

void	searchReplace(const std::string &s1, const std::string &s2, std::ifstream &infile, std::ofstream &outfile)
{
	if (s1.empty())
	{
		std::cerr << "Error: search string cannot be empty." << std::endl;
		return;
    }
	std::string	line;
	while (std::getline(infile, line))
	{
		std::string::size_type pos; 
		while ((pos = line.find(s1)) != std::string::npos)//tant que la string 1 est trouvee dans la line
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.size()); //obtient la substring de la ligne
		}																	//jusqu'a la 1ere position de s1 trouvee avec line.find
																			// rajoute s2 et rajoute le reste
		outfile << line; //ecriture de la line dans outfile.replace
		if (!infile.eof()) // add newline back, except after last line
			outfile << '\n';
	}
}
