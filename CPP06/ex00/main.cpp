/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:47:50 by retr0             #+#    #+#             */
/*   Updated: 2026/04/21 17:00:28 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::string value = av[1];
        ScalarConverter::convert(value);
        return (0);
    }
    return (std::cout << "Not enough arguments." << std::endl, 0);
}