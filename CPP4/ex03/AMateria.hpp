#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
		
	public:
		AMateria(std::string const & type);//default
		AMateria(const AMateria& other); //copy construct
		AMateria &operator=( const AMateria& other); //copy assignment
		virtual ~AMateria(); //destructor

		std::string const & getType() const; //Returns the materia type
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target); //override ?
};

#endif