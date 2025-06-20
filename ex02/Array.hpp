#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
	private:
		T	*_tab;
		int	_size;

	public:
		Array();
		Array(const Array& cpy);
		Array&	operator=(const Array& src);
		Array(int size);
		~Array();
		T&	operator[](int	idx);
		unsigned int	size();
};

# include "Array.tpp"

#endif
