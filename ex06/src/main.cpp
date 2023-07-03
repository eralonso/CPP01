/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:10:11 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 19:19:57 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Harl.hpp"
#include	<iostream>

int	main( int ac, char **av )
{
	Harl	one;

	if (ac != 2)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}
	one.complain(av[1]);
	return (0);
}
