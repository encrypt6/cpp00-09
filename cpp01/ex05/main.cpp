/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 20:23:18 by elsikira          #+#    #+#             */
/*   Updated: 2025/09/24 20:11:28 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl.harlComplaining("DEBUG");
	harl.harlComplaining("INFO");
	harl.harlComplaining("WARNING");
	harl.harlComplaining("ERROR");
	return (0);
}
