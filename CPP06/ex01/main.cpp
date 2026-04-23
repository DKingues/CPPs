/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:43:28 by retr0             #+#    #+#             */
/*   Updated: 2026/04/23 18:26:15 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data test;

    test.example = "Test one";
    uintptr_t adress = Serializer::serialize(&test);
    
    std::cout << adress << std::endl;
    
    Data* test2 = Serializer::deserialize(adress);

    std::cout << test2->example << std::endl;
    return (0);
}