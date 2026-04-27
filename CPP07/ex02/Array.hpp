/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:06:10 by dicosta-          #+#    #+#             */
/*   Updated: 2026/04/27 19:28:44 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T> class Array
{
	private:
		T* _data;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int size);
		Array(const Array<T> &other);
		~Array();
		
		Array &operator=(const Array<T> &other);

		void			setData(unsigned int index, T _data) const;

		unsigned int	getSize() const { return _size; };
		T	getData(unsigned int index) const { return _data[index]; };

		class OutOfBoundsException: public std::exception 
		{
			public:
				const char* what() const throw()
				{
					return ("Memory is out of bounds.");
				}
		};
};

template <typename T> Array<T>::Array()
{
	_data = new T[0];
}

template <typename T> Array<T>::Array(unsigned int size)
{
	_size = size;
	_data = new T[size];
}

template <typename T> Array<T>::Array(const Array<T> &other)
{
	*this = other;
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T> &other)
{
	if (this != &other)
	{
		delete[] _data;
		_size = other._size;
		if (_size > 0)
		{
			_data = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_data[i] = other._data[i];
		}
		else
			_data = new T[0];
	}
	return (*this);
}

template <typename T> Array<T>::~Array()
{
	delete[] _data;
}

template <typename T> void Array<T>::setData(unsigned int index, T data) const
{
	if (index > _size || _size == 0)
		throw (OutOfBoundsException());
	_data[index] = data;
}


#endif