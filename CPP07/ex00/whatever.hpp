/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:40:40 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/25 18:27:47 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T> void swap(T &y, T &x)
{
	T z = y;
	y = x;
	x = z;
};

template <typename T> T min(T &y, T &x)
{
	return ((y < x) ? y : x);
};

template <typename T> T max(T &y, T &x)
{
	return ((y > x) ? y : x);
};

#endif