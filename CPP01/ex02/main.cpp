/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:57:46 by dicosta-          #+#    #+#             */
/*   Updated: 2026/01/27 20:15:54 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPtr = &brain;
	std::string &brainRef = brain;

	std::cout << std::endl;
	std::cout << "Adress of brainStr: " << &brain << std::endl;
	std::cout << "Adress of brainPtr: " << &brainPtr << std::endl;
	std::cout << "Adress of brainRef: " << &brainRef << std::endl;
	std::cout << std::endl;
	std::cout << "Value of brainStr: " << brain << std::endl;
	std::cout << "Value of brainPtr: " << brainPtr << std::endl;
	std::cout << "Value of brainRef: " << brainRef << std::endl;
}