/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:28:57 by retr0             #+#    #+#             */
/*   Updated: 2026/04/24 19:02:13 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::srand(time(NULL));
    Base* BasePtr;

    BasePtr = Base::generate();
    Base::identify(BasePtr);
    Base& BaseRef = *BasePtr;
    Base::identify(BaseRef);
}