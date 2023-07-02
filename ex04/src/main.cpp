/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:23:07 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 14:01:25 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<fstream>

void	print_usage( void )
{
	std::cout << "Usage: ./NewSed <filename> <s1> <s2>" << std::endl;
}

bool	open_file(std::fstream &file, const char *name, std::ios_base::openmode mode)
{
	file.open(name, mode);
	if (file.is_open() == false)
	{
		std::cerr << "Error opening file" << std::endl;
		return (false);
	}
	return (true);
}

int	main( int ac, char **av )
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		replace;
	std::string		line;

	if (ac != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		print_usage();
		return (1);
	}
	// if (open_file(infile, av[1], std::ios_base::in) == false)
	// 	return (1);
	infile.open(av[1]);
	if (infile.is_open() == false)
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);		
	}
	replace = av[1];
	replace.append(".replace");
	outfile.open(replace.c_str());
	if (outfile.is_open() == false)
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);		
	}
	// if (open_file(infile, replace.c_str(), std::ios_base::out) == false)
	// {
	// 	infile.close();
	// 	return (1);
	// }
	while (getline(infile, line))
	{
		std::cout << line << std::endl;
	}
	// outfile << "aaaa\n";
	std::cout << "Debug " << av[1] << " " << getline(infile, line) << std::endl;
	return (0);
}
