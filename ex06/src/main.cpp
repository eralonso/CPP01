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

int	main( void )
{
	Harl	one;

	one.complain("debug");
	one.complain("info");
	one.complain("warning");
	one.complain("error");
	return (0);
}
