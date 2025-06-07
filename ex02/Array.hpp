#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include "Array.tpp"

template <typename T>
class Array
{
	private:
		T*	_tab;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& cpy);
		Array&	operator=(const Array& src);
		int	size(T* tab);
};

#endif
