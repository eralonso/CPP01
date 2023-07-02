/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:57:44 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 12:06:07 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon( void ) {}

std::string	const Weapon::getType( void ) const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
