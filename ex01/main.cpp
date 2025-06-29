# include "iter.hpp"

int	main(void)
{
	std::cout << "--- TEST ---" << std::endl;
	std::cout << std::endl;
	std::string	tab[3] = {"toto", "tutu", "tata"};
	iter(tab, 3, elements<std::string>);

	std::cout << std::endl;
	int		nb[3] = {1, 2, 3};
	iter(nb, 3, elements<int>);
	return 0;
}
