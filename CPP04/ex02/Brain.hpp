/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:37:38 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 19:44:36 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>


class	Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &toCopy);
		Brain& operator=(const Brain &other);
		virtual ~Brain();
};

#endif