#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "* empty tab created *" << std::endl;
	this->_size = 0;
	this->_tab = new T[1];
	this->_tab[0] = 0;
}

template <typename T>
Array<T>::Array(const Array& cpy)
{
	*this = cpy;
}

template <typename T>
Array<T>::Array(int size)
{
	this->_size = size;
	this->_tab = new T[size];
}

template <typename T>
Array<T>::~Array()
{
	delete [] _tab;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& src)
{
	if (this != &src)
	{
		for (int i = 0; i < src._size; i++)
			this->_tab[i] = src._tab[i];
		this->_size = src._size;
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](int idx)
{
	if (idx >= _size || idx < 0)
		throw std::runtime_error("Out of range");
	return _tab[idx];
}

template <typename T>
unsigned int	Array<T>::size()
{
	return _size;
}
