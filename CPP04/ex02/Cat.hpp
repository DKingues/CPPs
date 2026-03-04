/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:30:05 by dicosta-          #+#    #+#             */
/*   Updated: 2026/03/04 19:56:12 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &toCopy);
		Cat& operator=(const Cat &other);
		virtual ~Cat();
};

#endif
