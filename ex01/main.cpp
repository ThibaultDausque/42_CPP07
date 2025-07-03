# include "iter.hpp"

int	main(void)
{
	std::cout << "--- TEST ---" << std::endl;
	int		nb[] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	iter(nb, sizeof(nb) / sizeof(int), elements<int>);
	return 0;
}
