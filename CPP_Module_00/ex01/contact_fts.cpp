#include "phonebook.hpp"

std::string
    Contact::getFirstName(void) const
{
    return (this->_first_name);
}

std::string
    Contact::getLastName(void) const
{
    return (this->_last_name);
}

std::string
    Contact::getNickname(void) const
{
    return (this->_nickname);
}

std::string
    Contact::getPhoneNumber(void) const
{
    return (this->_phone_number);
}

std::string
    Contact::getDarkestSecret(void) const
{
    return (this->_darkest_secret);
}

int
	Contact::getIndex(void) const
{
    return (this->_index);
}

void
	Contact::setFirstName(std::string str)
{
    this->_first_name = str;
}

void
	Contact::setLastName(std::string str)
{
    this->_last_name = str;
}

void
	Contact::setNickname(std::string str)
{
    this->_nickname = str;
}

void
	Contact::setPhoneNumber(std::string str)
{
    this->_phone_number = str;
}

void
	Contact::setDarkestSecret(std::string str)
{
    this->_darkest_secret = str;
}

void
	Contact::setIndex(int nb)
{
    this->_index = nb;
}