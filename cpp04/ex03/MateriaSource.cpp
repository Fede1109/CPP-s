#include "./MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
	{
		_learnedMaterias[i] = NULL;
	}
	// std::cout << "Materia Source default constructor" << std::endl;
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
	for (size_t i = 0; i < 4; i++)
	{
		if (type == _learnedMaterias[i]->getType())
		{
			am = _learnedMaterias[i];
			return am;
		}
	}
	std::cout << "No materia found" << std::endl;
	return (NULL);
}

MateriaSource& MateriaSource::operator=(const MateriaSource &ms)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_learnedMaterias[i] = ms._learnedMaterias[i];
	}
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
	*this = ms;
}