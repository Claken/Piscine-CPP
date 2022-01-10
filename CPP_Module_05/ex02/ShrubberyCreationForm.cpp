#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->_sign == false)
		throw (Form::FormNotSignedException());
	if (executor.getGrade() <= this->_gradeExec)
		throw (Form::GradeTooLowException());
	else
	{
		std::ofstream		ofs(this->_target + "_shrubbery");
		ofs << "    oxoxoo    ooxoo" << std::endl;
		ofs << "  ooxoxo oo  oxoxooo" << std::endl;
		ofs << " oooo xxoxoo ooo ooox" << std::endl;
		ofs << " oxo o oxoxo  xoxxoxo" << std::endl;
		ofs << "  oxo xooxoooo o ooo" << std::endl;
		ofs << "    ooo\oo\  /o/o" << std::endl;
		ofs << "        \  \/ /" << std::endl;
		ofs << "         |   /" << std::endl;
		ofs << "         |  |" << std::endl;
		ofs << "         | D|" << std::endl;
		ofs << "         |  |" << std::endl;
		ofs << "         |  |" << std::endl;
		ofs << "  ______/____\____" << std::endl;
		ofs.close();
	}
}
