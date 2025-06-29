#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	elements(T	x)
{
	std::cout << x << std::endl;
}

template <typename T, typename F>
void	iter(T* tab, unsigned int len, F function)
{
	for (unsigned int i = 0; i < len; i++)
		function(tab[i]);
	return ;
}

#endif
