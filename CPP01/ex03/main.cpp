/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:24:53 by dicosta-          #+#    #+#             */
/*   Updated: 2026/02/03 16:00:16 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob = HumanA("bob", club);
		bob.attack();
		club.setType("Draco pew pew pew");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim = HumanB("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("A bigger draco PEW PEW PEW");
		jim.attack();
	}
	return (0);
}