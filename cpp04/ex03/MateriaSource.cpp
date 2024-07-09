#include "./MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
	{
		_learnedMaterias[i] = NULL;
	}
	std::cout << "Materia Source default constructor" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        if (_learnedMaterias[i]) {
            delete _learnedMaterias[i];
        }
    }
}
void MateriaSource::learnMateria(AMateria *a)
{
	AMateria *am = a;

	for (size_t i = 0; i < 4; i++)
	{
		if (_learnedMaterias[i] == NULL)
		{
			_learnedMaterias[i] = am;
			return ;
		}
	}
	std::cout << "No empty stores" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	AMateria *am;
	std::cout << "------------------------------" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (type == _learnedMaterias[i]->getType())
		{
			std::cout << "******" << std::endl;
			std::cout << "hola" << std::endl;
			std::cout << _learnedMaterias[i]->getType() << std::endl;
			std::cout << "******" << std::endl;
			am = _learnedMaterias[i];
			return am;
		}
	}
	std::cout << "No materia found" << std::endl;
	return (NULL);
}