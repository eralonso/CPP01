/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:21:28 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/05 10:17:26 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Harl.hpp"

Harl::Harl( void )
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
}

Harl::~Harl( void ) {}

void	Harl::_debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my " \
	<< "7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" \
	<< std::endl;
}

void	Harl::_info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. " \
	<< "You didn't put enough bacon in my burger! If you did, I" \
	<< "wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free." \
	<<" I've been coming for years whereas you started working here" \
	<< " since last month" << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now" \
	<< std::endl;
}

void	Harl::complain( std::string level )
{
	int	lvl;

	for ( lvl = 0; lvl < 4; lvl++ )
		if (!level.compare(_levels[lvl]))
			break ;
	switch (lvl)
	{
		case 0:
			Harl::_debug();
			std::cout << std::endl;
		case 1:
			Harl::_info();
			std::cout << std::endl;
		case 2:
			Harl::_warning();
			std::cout << std::endl;
		case 3:
			Harl::_error();
	}
}
