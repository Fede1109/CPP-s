#include "Intern.hpp"

Intern::Intern(void){}

Intern::Intern(Intern &i)
{
	(void) i;
}

Intern::~Intern(void){}

Intern &Intern::operator=(Intern &i)
{
	(void) i;
	return *this;
}

AForm *Intern::makeForm(std::string fName, std::string fTarget) const
{
	std::string forms[3] = {
			"ShrubberyCreationForm",
			"RobotomyRequestForm",
			"PresidentialPardonForm"
	};

	for (int i = 0; i < 3; i++)
	{
		if (fName == forms[i])
		{
			std::cout << "Intern creates " << fName  << std::endl;
			switch (i)
			{
			case 0:
				return new ShrubberyCreationForm(fTarget);
				break;
			case 1:
				return new RobotomyRequestForm(fTarget);
				break;
			case 2:
				return new PresidentialPardonForm(fTarget);
				break;
			}
		}
	}
	std::cerr << "Error: Form name not found" << std::endl;
	return NULL;
}