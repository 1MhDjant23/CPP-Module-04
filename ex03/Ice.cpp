#include "Ice.hpp"

Ice::Ice() : AMateria( "ice" ) {}

Ice::Ice( const Ice& other ) : AMateria( other ) {}

Ice&	Ice::operator=( const Ice& other ) {
	if ( this != &other )
		AMateria::operator=( other );
	return *this;
}

Ice::~Ice() {}

AMateria*	Ice::clone() const {
	AMateria*	mate = new Ice();
	return mate;
}