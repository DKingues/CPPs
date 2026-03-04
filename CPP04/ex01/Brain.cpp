/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:37:12 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 20:06:26 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Default Brain constructor]" << std::endl;
}

Brain::Brain(const Brain &toCopy)
{
	for (int i = 0; i <= 100; i++)
		this->ideas[i] = toCopy.ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		std::cout << "[Assignment operator]" << std::endl;
		*this = other;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain Deconstructor]" << std::endl;
}