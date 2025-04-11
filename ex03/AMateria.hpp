#ifndef AMATERIA_HPP
#define	AMATERIA_HPP
// #pragma once

#include <iostream>
#include <string>
//#include "Ice.hpp"
//#include "Cure.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria( std::string const & type );
		// AMateria( const AMateria& other );
		// AMateria&	operator=( const AMateria& other );
		virtual	~AMateria();
		std::string const & getType() const; 
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );
};

#endif