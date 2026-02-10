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

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		s1 = av[2];
		std::string		s2 = av[3];
		std::string		readStr;
		std::string		newStr;
		std::ifstream	file(av[1]);
		std::ofstream	newFile;
		int				pos;
		int				i = 0;

		newFile.open("file2.txt");

		while (getline(file, readStr))
		{
			while (readStr[i])
			{	
				std::cout << "aqui";
				pos = readStr.find(s1);
				if (pos > -1)
				{
					readStr += s2;
				}
				i++;
			}
			newFile.write(readStr.c_str(), readStr.size());
		}
		file.close();
		newFile.close();
	}
	return (0);
}

/*
Ler linha do ficheiro;
Iterar pela linha encontrar trocar
Igualar a readLine a newLine e voltar a ler

Coletando mais peixe e Col onda da Col
aaa1234etando mais peixe e Col onda da Col

*/
