/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:56:57 by dicosta-          #+#    #+#             */
/*   Updated: 2026/01/27 16:40:00 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
	public:
		Zombie(std::string nome);
		~Zombie();
		void 	announce(void);
	private:
		std::string name;
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);