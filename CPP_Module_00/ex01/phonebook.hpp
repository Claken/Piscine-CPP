#ifndef PHONEBOOK_H

# define PHONEBOOK_H

#include <iostream>

class Contact
{
	public:

	Contact(void);
	~Contact(void);

	int index;
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;
};

class Phonebook
{
	public:

	int nb;
	Phonebook(void);
	~Phonebook(void);
	Contact contacts[8];
	int		cmd_add(void);
	void	cmd_search(void) const;
	void	print_contact_coord(int i) const;
};

#endif
