
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
		RobotomyRequestForm(void);

	public:
	RobotomyRequestForm(std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &rrf);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rrf);
	~RobotomyRequestForm();

	void execute(Bureaucrat const &bur) const;

	std::string getTarget() const;
};


#endif