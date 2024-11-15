#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "Error: Usage-> ./PmergeMe <numbers>" << std::endl;
		return 1;
	}

	std::vector<int> vector;
	std::deque<int> deq;

	try
	{
		for (int i = 1; i < argc; i++)
		{
			std::string arg = argv[i];
			for (size_t i = 0; i < arg.size(); i++)
			{
				char c = arg[i];
				if (!std::isdigit(c))
				{
					throw std::runtime_error("Error: Todos los argumentos deben ser números enteros positivos.");
				}
			}

			long check = std::strtol(argv[i], NULL, 10);

			if (check > INT_MAX || check <= 0)
				throw std::runtime_error("Error: Número fuera del rango permitido o no positivo");

			int number = static_cast<int>(check);
			vector.push_back(number);
			deq.push_back(number);
		}
		clock_t startTimeDeq, startTimeVector, endTimeDeq, endTimeVector;
		std::cout << "Before -> vector: ";
		Pmerge::printVector(vector);
		std::cout << "Before -> deque: ";
		Pmerge::printDeque(deq);
		startTimeDeq = clock();
		deq = Pmerge::sortdeque(deq);
		endTimeDeq = (clock() - startTimeDeq) * 1000000 / CLOCKS_PER_SEC;
		startTimeVector = clock();
		vector = Pmerge::sortVector(vector);
		endTimeVector = (clock() - startTimeVector) * 1000000 / CLOCKS_PER_SEC;
		std::cout << "After -> vector: ";
		Pmerge::printVector(vector);
		std::cout << "After -> deque: ";
		Pmerge::printDeque(deq);
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << endTimeDeq << " us" << std::endl;
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << endTimeVector << " us" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}

	return 0;
}
