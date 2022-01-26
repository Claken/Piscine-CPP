#include "Convert.hpp"

Convert::Convert(char *av)
{
    this->_str = av;

    if (this->_str.size() == 1 && !std::isdigit(*av))
    {
        this->_convch = *av;
		this->_convnb = 0;
        this->_which = 0;
        this->_castch = static_cast<char>(this->_convch);
	    this->_castint = static_cast<int>(this->_convch);
	    this->_castf = static_cast<float>(this->_convch);
	    this->_castd = static_cast<double>(this->_convch);
    }
    else
    {
        this->_convnb = strtod(av, NULL);
		this->_convch = 0;
        this->_which = 1;
        this->_castch = static_cast<char>(this->_convnb);
	    this->_castint = static_cast<int>(this->_convnb);
	    this->_castf = static_cast<float>(this->_convnb);
	    this->_castd = static_cast<double>(this->_convnb);
    }
}

Convert::Convert(Convert const & instance)
{
	*this = instance;
}

void		Convert::print_char() const
{
    std::cout << "char   : ";
    if (this->_which)
    {
	    if (std::isnan(this->_convnb) || std::isinf(this->_convnb)
			|| this->_convnb > CHAR_MAX || this->_convnb < CHAR_MIN)
		    std::cout << "impossible" << std::endl;
	    else if (!std::isprint(this->_castch))
	    	std::cout << "Non displayable" << std::endl;
    	else
	    	std::cout << "'" << this->_castch << "'" << std::endl;
    }
    else
    {
        std::cout << "'" << this->_castch << "'" << std::endl;
    }
}
void		Convert::print_int() const
{
    std::cout << "int    : ";
    if (this->_which)
	{
	    if (!std::isnan(this->_convnb) && !std::isinf(this->_convnb)
			&& this->_convnb <= INT_MAX && this->_convnb >= INT_MIN)
		    std::cout << this->_castint << std::endl;
	    else
		    std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << this->_castint << std::endl;
	}

}
void		Convert::print_float() const
{
	std::cout << "float  : ";
	if (this->_which)
	{
		if (this->_castint == this->_castf)
			std::cout << this->_castf << ".0" << "f" << std::endl;
		else
			std::cout << this->_castf << "f" << std::endl;
	}
	else
	{
		std::cout << this->_castf << ".0" << "f" << std::endl;
	}
}
void		Convert::print_double() const
{
	std::cout << "double : ";
	if (this->_which)
	{
		if (this->_castint == this->_castf)
			std::cout << this->_castd << ".0" << std::endl;
		else
			std::cout << this->_castd << std::endl;
	}
	else
	{
		std::cout << this->_castd << ".0" << std::endl;
	}
}

Convert&	Convert::operator=(Convert const & instance)
{
    this->_which = instance._which;
	this->_str = instance._str;
	this->_convnb = instance._convnb;
	this->_convch = instance._convnb;
    this->_castch = instance._castch;
	this->_castint = instance._castint;
	this->_castf = instance._castf;
	this->_castd = instance._castd;
	return (*this);
}