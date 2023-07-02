/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:23:07 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 17:10:11 by eralonso         ###   ########.fr       */
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

std::string	replace(std::string content, std::string str_old, std::string str_new)
{
	int			pos;
	int			old_len;
	std::string	definitly;

	old_len = str_old.length();
	while (42)
	{
		pos = content.find(str_old);
		if (pos < 0)
			break ;
		definitly += content.substr(0, pos);
		definitly += str_new;
		content.erase(0, pos + old_len);
	}
	definitly += content;
	return (definitly);
}

int	main( int ac, char **av )
{
	std::fstream	infile;
	std::fstream	outfile;
	std::string		out;
	std::string		line;
	std::string		content;

	if (ac != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		print_usage();
		return (1);
	}
	if (open_file(infile, av[1], std::ios_base::in) == false)
		return (1);
	out = av[1];
	out.append(".replace");
	if (open_file(outfile, out.c_str(), std::ios_base::out) == false)
	{
		infile.close();
		return (1);
	}
	while (std::getline(infile, line))
		content += line.append(1, '\n');
	outfile << replace(content, av[2], av[3]) << std::endl;
	return (0);
}
