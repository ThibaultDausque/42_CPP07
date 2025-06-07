#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	elements(T	x)
{
	std::cout << x << std::endl;
}

template <typename T>
void	iter(T* tab, int len, void (elements)(T))
{
	for (int i = 0; i < len; i++)
		elements(tab[i]);
}

#endif
