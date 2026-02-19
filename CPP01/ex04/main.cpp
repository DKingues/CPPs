/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:01:09 by dicosta-          #+#    #+#             */
/*   Updated: 2026/02/09 16:36:43 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int parsing (int ac, char **av)
{
	std::string string;

	if (ac != 4)
		return (std::cout << "Invalid: arguments." << std::endl, 0);
	string = av[2];
	if (string.empty())
		return (std::cout << "Invalid: string is empty." << std::endl, 0);
	string = av[3];
	if (string.empty())
		return (std::cout << "Invalid: string is empty." << std::endl, 0);
	return (1);
}

int	main(int ac, char **av)
{
	if (parsing(ac, av))
	{
		std::string		s1 = av[2];
		std::string		s2 = av[3];
		std::string		readStr;
		std::string		newFileName = av[1];
		std::ifstream	file(av[1]);
		std::ofstream	newFile;
		int				pos;

		newFileName += ".replace";
		newFile.open(newFileName.c_str());
		while (getline(file, readStr))
		{
			for (int i = 0; readStr[i]; i++)
			{
				pos = readStr.find(s1, i);
				if (pos > -1)
				{
					for (int j = i; j < pos; j++)
						newFile << readStr[j];
					newFile << s2;
					i += pos + s1.size() - 1;
				}
				else
					newFile << readStr[i];
			}
			newFile << std::endl;
		}
		file.close();
		newFile.close();
	}
	return (0);
}

