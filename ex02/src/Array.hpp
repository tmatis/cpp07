/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 21:08:33 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/27 21:20:30 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array(void)
		{
			this->_array = NULL;
			this->_size = 0;
		}
		Array(unsigned int n)
		{
			this->_array = new T[n];
			this->_size = n;
		}
		Array(Array const &src)
		{
			this->_array = NULL;
			this->_size = 0;
			*this = src;
		}
		~Array(void)
		{
			if (this->_array)
				delete [] this->_array;
		}
		Array &operator=(Array const &rhs)
		{	
			if (this->_array)
				delete [] this->_array;
			this->_array = new T[rhs.size()];
			this->_size = rhs.size();
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs.getArray()[i];
			return *this;
		}
		T &operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw std::exception();
			return this->_array[i];
		}
		T const &operator[](unsigned int i) const
		{
			if (i >= this->_size)
				throw std::exception();
			return this->_array[i];
		}
		unsigned int size(void) const
		{
			return this->_size;
		}
		T *getArray(void) const
		{
			return this->_array;
		}
};

#endif
