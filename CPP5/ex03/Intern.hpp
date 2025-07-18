
#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class AForm;

class Intern
{
	private:
		int	checkFormExists(std::string formName);
	
	public:
		Intern(void);//default
		Intern(const Intern& other); //copy construct
		Intern &operator=( const Intern& other); //copy assignment
		~Intern(); //destructor

		class FormDoesNotExistException : public std::exception 
		{
			public:
				const char * what(void) const throw();
		};

		AForm*	makeForm(std::string formName, std::string formTarget);
};

#endif