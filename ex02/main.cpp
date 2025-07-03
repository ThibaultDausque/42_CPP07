#include "Array.hpp"

int	main(void)
{
	try
	{
		Array<int> tab_nb(10);
		Array<int> empty_tab;

		for (unsigned int i = 0; i < tab_nb.size(); i++)
			tab_nb[i] = i;

		std::cout << "--- SIZE ---" << std::endl;
		std::cout << "tab_nb: " << tab_nb.size() << std::endl;
		std::cout << std::endl;
		std::cout << "--- GET A NB ---" << std::endl;
		std::cout << tab_nb[5] << std::endl;
		std::cout << std::endl;
		std::cout << "--- OUT OF RANGE ---" << std::endl;
		std::cout << tab_nb[-5] << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

//Elements must be accessible for reading and writing through the operator[] (or reading only if the instance is const).
