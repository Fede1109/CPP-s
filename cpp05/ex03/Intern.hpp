#ifndef INTERN_HPP
#define INTERN_HPP
# include <iostream>
# include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern (void);
		Intern (Intern &i);
		~Intern(void);
		Intern &operator=(Intern &i);
		AForm *makeForm(std::string fName, std::string fTarget) const;
};
#endif