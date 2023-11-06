#include <iostream>

int main(int ac , char **av)
{
	if (ac > 1)
	{
		for (int i = 1; av[i] != 0; i++ )
		{
			for (int j = 0; av[i][j] != 0; j++)
			{
				std::cout << (char)toupper(av[i][j]);
			}
			std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}