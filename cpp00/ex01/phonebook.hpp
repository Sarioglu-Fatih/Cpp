#ifndef _PHONEBOOK_
# define _PHONEBOOK_

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>

class	Contact
{
	public:
		Contact();
		~Contact();
		void		put_index(int i);
		void		put_cname(std::string str, char c);
		void		thisname();
		void		putthename();
	private:
		int			index;
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;
};

class	Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void		searchcontact();
		void		addcontact();
		void		init_nb_contact();
	
	private:
		int			nb_contact = 0;
		int			nb_total_contact;
		Contact		person[8];
};

#endif
