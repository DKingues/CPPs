/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:56:57 by dicosta-          #+#    #+#             */
/*   Updated: 2026/01/27 18:13:11 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string _name);
		~Zombie();
		void setName(std::string _name);
		void announce(void);
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string _name);