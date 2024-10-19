#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string &target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf)
	: AForm("RobotomyRequestForm", 72, 45), _target(rrf._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (this != &assign)
	{
		this->AForm::operator=(assign);
		this->_target = assign._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &bur) const
{
	if (!this->getSigned())
		throw FormNotSigned();
	if (this->getExecutionGrade() < bur.getGrade())
		throw GradeTooLowException();
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << "\033[2;30m* SAFEASFASFAFWASD DSA DASD AD AS AWSDSDADD GOD *\033[0;32m" << std::endl;
		std::cout << this->_target << " has been robotomized successfully\033[0m" << std::endl;
	}
	else
		std::cout << "\033[0;31mRobotomy for " << _target << " failed\033[0m" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}