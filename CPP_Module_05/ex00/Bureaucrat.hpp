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

	class GradeTooHighException
	{
		
	};
	class GradeTooLowException
	{
		
	};

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & instance);
	int					getGrade() const;
	const std::string	getName() const;
	void				increaseGrade();
	void				decreaseGrade();
};

#endif
