/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:34:50 by retr0             #+#    #+#             */
/*   Updated: 2026/04/23 18:47:04 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    std::cout << "[Base destructor called]" << std::endl;
}

Base * generate(void)
{
    int randomSelector = std::rand() % 3;
    
    Base childClass;
    if (randomSelector == 0)
        A childClass;
    else if (randomSelector == 1)
        B childClass;
    else if (randomSelector == 2)
        C childClass;
    else
        return (NULL);
    return (&childClass);
};

void identify(Base* p);

void identify(Base& p);
