/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:10:15 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 12:17:59 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL) {}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with their ";
	if (_weapon)
		std::cout << _weapon->getType();
	else
		std::cout << "punch";
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}
