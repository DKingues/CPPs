/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-20 20:11:10 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-20 20:11:10 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl()
{
    std::cout << "[DECONSTRUCTOR]" << std::endl;
    std::cout << "Harl got obliterated into atom size pieces." << std::endl;
    std::cout << std::endl;
};
void    Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}
void    Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
    std::cout << std::endl;
}
void    Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}
void    Harl::complain(std::string level)
{
    std::string comment[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (comment[i] != level)
        i++;
    switch (i)
    {
        case 0:
            Harl::debug();
            i++;
        case 1:
            Harl::info();
            i++;
        case 2:
            Harl::warning();
            i++;
        case 3:
            Harl::error();
            break;
        default:
            std::cout << "Everything was perfect, harl is satisfied." << std::endl;
            break;
    }
    return ;
}