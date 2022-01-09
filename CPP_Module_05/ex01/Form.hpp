#ifndef FORM_HPP

#define FORM_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat;

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
			return ("the grade is too high !");
		}
	};
	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return ("the grade is too low !");
		}
	};
	Form() : _name(NULL), _sign(false), _gradeSign(0), _gradeExec(0) {};
	Form(Form const & instance);
	Form(std::string name, int sign, int exec);
	~Form() {};
	Form&				operator=(Form const & instance);
	std::string			getName() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	bool				getSignBool() const;
	void				beSigned(Bureaucrat const & instance);
};

std::ostream&			operator<<(std::ostream& os, Form const & instance);

#endif
