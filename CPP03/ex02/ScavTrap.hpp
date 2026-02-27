/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 20:28:34 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-27 20:28:34 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& toCopy);
        ScavTrap& operator=(const ScavTrap &other);
        ScavTrap(std::string name);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate(void);
};

#endif

