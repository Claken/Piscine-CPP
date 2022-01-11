#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & instance) :
	Form(instance)
{
	*this = instance;
}

std::string					ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void						ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignBool() == false)
		throw (Form::FormNotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw (Form::GradeTooLowException());
	else
	{
		std::string			name = this->_target;
		name.append("_shrubbery");
		std::ofstream		ofs(name.data());
		ofs << "    oxoxoo    ooxoo" << std::endl;
		ofs << "  ooxoxo oo  oxoxooo" << std::endl;
		ofs << " oooo xxoxoo ooo ooox" << std::endl;
		ofs << " oxo o oxoxo  xoxxoxo" << std::endl;
		ofs << "  oxo xooxoooo o ooo" << std::endl;
		ofs << "    ooo\\oo\\  /o/o" << std::endl;
		ofs << "        \\  \\/ /" << std::endl;
		ofs << "         |   /" << std::endl;
		ofs << "         |  |" << std::endl;
		ofs << "         | D|" << std::endl;
		ofs << "         |  |" << std::endl;
		ofs << "         |  |" << std::endl;
		ofs << "  ______/____\\____" << std::endl;
		ofs.close();
	}
}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & instance)
{
	this->_target = instance.getTarget();
	return (*this);
}
