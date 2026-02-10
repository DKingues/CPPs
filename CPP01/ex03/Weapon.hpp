/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:24:49 by dicosta-          #+#    #+#             */
/*   Updated: 2026/01/28 01:53:04 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPONS
#define WEAPONS

#include <iostream>
#include <string>
#include <cstdlib>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		const std::string& getType();
		void setType(std::string newType);
	private:
		std::string _type;
};

#endif