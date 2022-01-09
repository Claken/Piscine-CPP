#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & instance) : _name(instance.getName())
{
	this->_grade = instance.getGrade();
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
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void				Bureaucrat::decreaseGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void				Bureaucrat::signForm(Form &instance)
{
	try
	{
		instance.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " cannot sign " << instance.getName() << " because ";
		std::cout << e.what() << std::endl;
	}
	std::cout << this->_name << " signs " << instance.getName() << std::endl;
}

Bureaucrat&			Bureaucrat::operator=(Bureaucrat const & instance)
{
	this->_grade = instance.getGrade();
	return (*this);
}

std::ostream&		operator<<(std::ostream& os, Bureaucrat const & instance)
{
	os << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return os;
}
