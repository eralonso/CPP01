/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:38:24 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 11:15:56 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include	<string>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie( void );
		~Zombie( void );
		void	setName( std::string name );
		void	announce( void );
};

Zombie	*zombieHorde( int N, std::string name );

#endif
