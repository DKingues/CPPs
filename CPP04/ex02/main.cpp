/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:21:21 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 22:23:09 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	Animal *b[100];
	//Animal a;
	for (int i = 0; i <= 100; i++)
	{
		std::cout << "[" << i << "] " << std::endl;
		if (i <= 50)
			b[i] = new Dog();
		else
			b[i] = new Cat();
	}
	b[0]->makeSound();
	b[100]->makeSound();
	for (int i = 0; i <= 100; i++)
	{
		std::cout << "[" << i << "] " << std::endl;
		delete b[i];
	}

	return (0);
}