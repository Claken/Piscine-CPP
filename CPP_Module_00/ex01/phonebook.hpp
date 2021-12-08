#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <iostream>

class Contact
{
	private:

	int 				_index;
	std::string			_first_name;
	std::string			_last_name;
	std::string			_nickname;
	std::string			_phone_number;
	std::string			_darkest_secret;

	public:

	Contact(void) : _index(0) {};
	~Contact(void) {};
	std::string			getFirstName(void) const;
	std::string			getLastName(void) const;
	std::string			getNickname(void) const;
	std::string			getPhoneNumber(void) const;
	std::string			getDarkestSecret(void) const;
	int					getIndex(void) const;
	void				setFirstName(std::string str);
	void				setLastName(std::string str);
	void				setNickname(std::string str);
	void				setPhoneNumber(std::string str);
	void				setDarkestSecret(std::string str);
	void				setIndex(int nb);
};

class Phonebook
{
	private :

	int					nb;
	int					overwrite;
	Contact				contacts[8];
	
	public:

	Phonebook(void) : nb(0) {};
	~Phonebook(void) {};
	int					cmd_add(void);
	int					cmd_search(void) const;
	void				print_contact_coord(int i) const;
	int					getNb(void) const;
	void				setNb(int n);
	int					getOverwrite(void) const;
	void				setOverwrite(int n);
};

#endif
