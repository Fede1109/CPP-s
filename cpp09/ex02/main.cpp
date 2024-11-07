#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "Error: Usage-> ./PmergeMe <numbers>" << std::endl;
		return 1;
	}

	std::vector<int> vector;
	std::list<int> lst;

	try
	{
		for (int i = 1; i < argc; i++)
		{
			std::string arg = argv[i];
			for (char c : arg)
			{
				if (!std::isdigit(c))
				{
					throw std::runtime_error("Error: Todos los argumentos deben ser números enteros positivos.");
				}
			}
			long check = std::strtol(argv[i], nullptr, 10);

			if (check > INT_MAX || check <= 0)
				throw std::runtime_error("Error: Número fuera del rango permitido o no positivo");

			int number = static_cast<int>(check);
			vector.push_back(number);
			lst.push_back(number);
		}

		std::cout << "After   (vector): ";
		Pmerge::printVector(vector);
		std::cout << "After   (list): ";
		Pmerge::printList(lst);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}

	return 0;
}
