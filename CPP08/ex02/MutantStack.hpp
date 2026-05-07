/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:55:25 by retr0             #+#    #+#             */
/*   Updated: 2026/05/07 18:48:27 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(): std::stack<T>(){};
        MutantStack(const MutantStack &other): std::stack<T>(other)
        {
            *this = other;
        };
        virtual ~MutantStack(){};
        
        MutantStack& operator=(const MutantStack &other)
        {
            if (this != &other)
                std::stack<T>::operator=(other);
            return (*this);
        };
        
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(){ return (this->c.begin());};
        iterator end(){ return (this->c.end());};
};

#endif