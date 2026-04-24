/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:34:50 by retr0             #+#    #+#             */
/*   Updated: 2026/04/24 19:04:00 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    std::cout << "[Base destructor called]" << std::endl;
}

Base* Base::generate(void)
{
    int randomSelector = std::rand() % 3;

    if (randomSelector == 0)
    {   
        A* childClass = new A();
        return (childClass);
    }
    else if (randomSelector == 1)
    {
        B* childClass = new B();
        return (childClass);
    }
    else if (randomSelector == 2)
    {   
        C* childClass = new C();
        return (childClass);
    }
    return (NULL);
};

void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type: C" << std::endl;
};

void Base::identify(Base& p)
{
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "Type: A" << std::endl;
        return ;
    }
    catch(...)
    {
    }
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "Type: B" << std::endl;
        return ;
    }
    catch(...)
    {
    }
    try
    {
        dynamic_cast<C&>(p);
        std::cout << "Type: C" << std::endl;
        return ;
    }
    catch(...)
    {
    }
};
