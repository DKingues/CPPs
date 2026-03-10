/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 19:04:07 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-27 19:04:07 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Diogo");
    a.attack("Renato");
    std::cout << "Health: " << a.getHealth() << std::endl;
    std::cout << "Energy: " << a.getEnergy() << std::endl;
    std::cout << "Attack: " << a.getAttack() << std::endl;
    a.beRepaired(1);
    return (0);
}