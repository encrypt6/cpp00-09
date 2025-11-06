/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchReplace.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2120/11/09 04:34:29 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/22 19:54:49 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_REPLACE_HPP
#define SEARCH_REPLACE_HPP

#include "fstream"
#include "iostream"

void	searchReplace(const std::string &s1, const std::string &s2, std::ifstream &infile, std::ofstream &outfile);

#endif
