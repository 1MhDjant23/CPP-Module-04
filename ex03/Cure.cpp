#include "Cure.hpp"
//#include "AMateria.hpp"

Cure::Cure() : AMateria( "cure" ) {
	// std::cout << "[ Cure available now ]" << std::endl;
}

Cure::Cure( const Cure& other ) {
	*this = other;
	// std::cout << "[ New Cure available now ]" << std::endl;
}

Cure&	Cure::operator=( const Cure& other ) {
	if ( this != &other )
		AMateria::operator=( other );
	return *this;
}

Cure::~Cure() {
	// std::cout << "<< No more Cure >>" << std::endl;
}

AMateria*	Cure::clone() const {
	std::cout << "Clonning Cure materia .." << std::endl;
	AMateria*	mater = new Cure();
	return mater;
}


// void	Cure::use( ICharacter& target ) {
// 	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// }
