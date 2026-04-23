/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:28:46 by retr0             #+#    #+#             */
/*   Updated: 2026/04/23 18:36:55 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CPP
#define BASE_CPP

#include <iostream>
#include <string>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
class Base
{
    public:
        virtual ~Base();
        Base * generate(void);
        // It randomly instantiates A, B, or C and returns the instance as a Base pointer. Feel free
        // to use anything you like for the random choice implementation.
        void identify(Base* p);
        // It prints the actual type of the object pointed to by p: "A", "B", or "C".
        void identify(Base& p);
        // It prints the actual type of the object referenced by p: "A", "B", or "C". Using a pointer
        // inside this function is forbidden.
};

#endif