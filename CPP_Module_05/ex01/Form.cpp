#include "Form.hpp"

Form::Form(std::string name, int sign, int exec) : _name(name), _gradeSign(sign), _gradeExec(exec)
{
	this->_sign = false;
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw (Form::GradeTooHighException());
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw (Form::GradeTooLowException());
}
