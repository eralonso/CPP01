/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:12:32 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 18:08:45 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
# define __HARL_H__

# include	<string>

class Harl
{
	private:
		void		(Harl::*_fpm[4])( void );
		std::string	_levels[4];
		void		_debug( void );
		void		_info( void );
		void		_warning( void );
		void		_error( void );
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif
