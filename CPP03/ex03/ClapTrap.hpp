/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 19:04:26 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 16:46:13 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _health;
        int _energy;
        int _attack;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        virtual ~ClapTrap();
        ClapTrap(const ClapTrap& toCopy);
        ClapTrap& operator=(const ClapTrap &other);
        void attack(const std::string&target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void);
        int getHealth(void);
        int getEnergy(void);
        int getAttack(void);
};

#endif
