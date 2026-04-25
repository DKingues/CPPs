/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:31:12 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/25 19:57:31 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T> void iter(T a[], const unsigned int length, void (*operation)(T&))
{
	for (int i = 0; i < static_cast<int>(length); i++)
	{
		operation(a[i]);
	}
};

#endif