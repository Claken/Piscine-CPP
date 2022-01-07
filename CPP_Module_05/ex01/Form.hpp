#ifndef FORM_HPP

#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private :

	const std::string	_name;
	bool				_sign;
	const int			_gradeSign;
	const int			_gradeExec;

	public :

	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return ("The grade is too high !");
		}
	};
	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return ("The grade is too low !");
		}
	};
	Form();
	Form(std::string name, int sign, int exec);
	~Form();
	const std::string	getName() const;
	const int			getGradeSign() const;
	const int			getGradeExec() const;
	void				beSigned();
	void				signForm();
};

std::ostream&			operator<<(std::ostream& os, Form const & instance);

#endif
