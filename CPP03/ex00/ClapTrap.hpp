/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-27 19:04:26 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-27 19:04:26 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _health;
        int _energy;
        int _attack;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
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

