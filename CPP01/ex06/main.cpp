/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-20 20:10:38 by dicosta-          #+#    #+#             */
/*   Updated: 2026-02-20 20:10:38 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl complainer;

    if (ac < 2)
        return (std::cout << "Invalid: Wrong number of arguments." << std::endl, 0);
    for (int i = 1; i < ac; i++)
        complainer.complain(av[i]);
    return (0);
}