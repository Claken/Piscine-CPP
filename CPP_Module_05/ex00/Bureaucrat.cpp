#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	this->_grade = grade;
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

void				Bureaucrat::increaseGrade()
{
	this->_grade--;
	if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException);
}

void				Bureaucrat::decreaseGrade()
{
	this->_grade++;
	if (this->grade < 150)
		throw (Bureaucrat::GradeTooLowException);
}
