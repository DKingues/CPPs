/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 20:53:08 by retr0             #+#    #+#             */
/*   Updated: 2026/04/22 20:56:26 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "[Serializer default constructor]" << std::endl;
};
Serializer::Serializer(const Serializer &other)
{
    std::cout << "[Serializer copy constructor]" << std::endl;
    *this = other;
};

Serializer& Serializer::operator=(const Serializer &other)
{
    std::cout << "[Serializer assignment operator]" << std::endl;
    if (this != &other)
    {
        
    }
    return (*this);
};

Serializer::~Serializer()
{
    std::cout << "[Serializer destructor]" << std::endl;
};