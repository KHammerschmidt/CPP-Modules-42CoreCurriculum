#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "\033[0;31mERROR! Invalid number of args!" << std::endl;
		return 1;
	}
	
	Harl harl;

	harl.complain(argv[1]);
}