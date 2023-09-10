/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:57:39 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/09/10 13:57:39 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

template<typename T>
class	Array
{
private :

	T		*_array;
	size_t	_size;

	class	OutOfRangeException : public std::exception
	{
	private:
		virtual char const	*what(void) const throw()
			return "index is out of range";
	};
public :

	Array<T>(void) :
	_array(new T[0]()),
	_size(0) 
	{
		if (DEBUG)
			std::cout << "Array default constructor called\n";
	}

	Array<T>(uint const n) : 
	_array(new T[n]()),
	_size(n)
	{
		if (DEBUG)
			std::cout << "Array constructor called\n";
		for (int i = 0; i < this->_size; i++)
			this->_array[i] = 0;
	}

	Array<T>(Array<T> const &src) :
	_array(new T[src._size]()),
	_size(src._size)
	{
		if (DEBUG)
			std::cout << "Array copy constructor called\n";
		for (int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i];
	}

	~Array<T>(void)
	{
		if (DEBUG)
			std::cout << "Array destructor called\n";
		delete [] this->_array;
	}

	size_t	size(void) const
	{
		if (DEBUG)
			std::cout << "Array size() member function called\n";
		return this->_size;
	}

	Array	&operator=(Array<T> const &src)
	{
		if (DEBUG)
			std::cout << "Array copy operator called\n";
		if (this != &src)
		{
			delete [] this->_array;
			this->_size = src._size;
			this->_array = new T[src._size];
			for (int i = 0; i < src._size; i++)
				this->_array[i] = src._array[i];
		}
		return *this;
	}

	T	&operator[](uint const i)
	{
		if (i >= this->_size)
			throw OutOfRangeException();
		return this->_array[i];
	}
}

#endif
