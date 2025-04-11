#include "Ice.hpp"

Ice::Ice() : AMateria( "ice" ) {
	// std::cout << "{ Ice available now }" << std::endl;
}

Ice::Ice( const Ice& other ) {
	*this = other;
	// std::cout << "{ New Ice available now }" << std::endl;
}

Ice&	Ice::operator=( const Ice& other ) {
	if (this != &other)
		AMateria::operator=( other );
	return *this;
}

Ice::~Ice() {
	
	// std::cout << "$ No more Ice now $" << std::endl;
}

// void	Ice::use( ICharacter& target ) {
// 	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// }

AMateria*	Ice::clone() const {
	std::cout << "Clonning Ice materia .." << std::endl;
	AMateria*	mate = new Ice();
	return mate;
}