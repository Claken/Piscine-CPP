#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	protected :

	const std::string	_name;
	int					_grade;

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
	Bureaucrat() {};
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & instance);
	~Bureaucrat() {};
	Bureaucrat&			operator=(Bureaucrat const & instance);
	int					getGrade() const;
	const std::string	getName() const;
	void				increaseGrade();
	void				decreaseGrade();
};

std::ostream&			operator<<(std::ostream& os, Bureaucrat const & instance);

#endif
