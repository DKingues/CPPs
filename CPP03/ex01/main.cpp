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

int main(void)
{
    ClapTrap a("Diogo");
    ScavTrap b("Diego");

    a.attack("Renato");
    a.takeDamage(2);
    a.beRepaired(1);
    b.attack("Renatu");
    b.guardGate();
    b.takeDamage(10);
    b.beRepaired(2);
    return (0);
}