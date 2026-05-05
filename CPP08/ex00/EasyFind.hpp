/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:06:55 by retr0             #+#    #+#             */
/*   Updated: 2026/05/05 19:09:24 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>

template <typename T> int easyfind(T& param, int number)
{
    for (unsigned int i = 0; i < param.size(); i++)
    {
        if (param[i] == number)
            return (i);
    }
    throw (std::exception());
};

#endif