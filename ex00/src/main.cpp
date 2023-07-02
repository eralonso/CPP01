/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:53:36 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 10:59:13 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

int	main( void )
{
	Zombie	*one;
	
	one = newZombie("Frank");
	randomChump("NotFrank");
	one->announce();
	randomChump("NotFrank");
	delete one;
	return (0);
}
