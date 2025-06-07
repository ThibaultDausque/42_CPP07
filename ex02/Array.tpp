#include <iostream>

template <typename T>
Array<T>::Array()
{
	this->_tab = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_tab = new T[n];
}

template <typename T>
Array<T>::Array(const Array& cpy)
{
		*this = cpy;
}

template <typename T>
Array&	Array<T>::operator=(const Array& src)
{
	int		i = 0;

	if (this != &src)
	{
		while (this->_tab[i])
		{
			this->_tab[i] = src._tab[i];
			i++;
		}
	}
	return *this;
}

template <typename T>
int	Array<T>::size(T* tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return i;
}
