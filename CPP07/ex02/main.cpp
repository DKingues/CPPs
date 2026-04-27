/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:08:11 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/27 19:28:23 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<unsigned int> FirstClass(12);
    
    for (unsigned int i = 0; i < 14; i++)
    {
        try
        {
            FirstClass.setData(i, i);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << FirstClass.getData(i) << std::endl;
    }
}