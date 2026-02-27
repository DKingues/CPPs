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
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    // ClapTrap a("Diogo");
    // ScavTrap b("Diego");
    //FragTrap c("Diogu");
    DiamondTrap d("Diugo");

    // std::cout << "ClapTrap Testing" << std::endl;
    // a.attack("Renato");
    // a.takeDamage(2);
    // a.beRepaired(1);
    // std::cout << "ScavTrap Testing" << std::endl;
    // b.attack("Renatu");
    // b.guardGate();
    // b.takeDamage(10);
    // b.beRepaired(2);
    // std::cout << "FragTrap Testing" << std::endl;
    // c.attack("Rinato");
    // c.highFivesGuys();
    d.attack("Rinatu");
    return (0);
}