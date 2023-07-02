/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:19:32 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 11:44:48 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<iomanip>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str Address" << std::setw(16) << ": "<< &str << std::endl;
	std::cout << "stringPTR Content Address" << std::setw(1) << ": "<< stringPTR << std::endl;
	std::cout << "stringREF Content Address" << std::setw(1) << ": "<< &stringREF << std::endl;
	std::cout << "str Value" << std::setw(18) << ": "<< str << std::endl;
	std::cout << "stringPTR Pointed Value" << std::setw(4) << ": "<< *stringPTR << std::endl;
	std::cout << "stringREF Pointed Value" << std::setw(4) << ": "<< stringREF << std::endl;
	return (0);
}