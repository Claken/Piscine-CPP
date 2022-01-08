#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int sign, int exec) : _name(name), _gradeSign(sign), _gradeExec(exec)
{
	this->_sign = false;
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw (Form::GradeTooHighException());
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw (Form::GradeTooLowException());
}

std::string		Form::getName() const
{
	return (this->_name);
}

int				Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int				Form::getGradeExec() const
{
	return (this->_gradeExec);
}

bool			Form::getSignBool() const
{
	return (this->_sign);
}

void			Form::beSigned(Bureaucrat const & instance)
{
	if (instance.getGrade() <= this->getGradeSign())
		this->_sign = true;
	else
		throw (Form::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& os, Form const & instance)
{
	os << "form name : " << instance.getName() << std::endl;
	os << "form signed ? " << instance.getSignBool() << std::endl;
	os << "form grade required to sign it : " << instance.getGradeSign() << std::endl;
	os << "form grade required to execute it : " << instance.getGradeExec() << std::endl;
	return os;
}

