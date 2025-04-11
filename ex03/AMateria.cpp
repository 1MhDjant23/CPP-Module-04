#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("Materia") {
	// std::cout << "--> AMateria Created <--" << std::endl;
}

AMateria::AMateria( std::string const & type ) : type(type) {
	// std::cout << "--> Materia " << this->type << " Created <--" << std::endl;
}

// AMateria::AMateria( const AMateria& other ) {
// 	*this = other;
// 	std::cout << "--> Materia " << this->type << " Created <--" << std::endl;
// }

// AMateria&	AMateria::operator=( const AMateria& other ) {
// 	// if (this != &other)
// 	// 	this->type = other.type;
// 	std::cout << "Operator `=' called" << std::endl;
// 	return *this;	
// }

AMateria::~AMateria() {
	// std::cout << "-- AMateria Destroyed --" << std::endl;
}

std::string const &	AMateria::getType() const {
	return this->type;
}

// AMateria*	AMateria::clone() const {
// 	// std::cout << "' Base Clone called '" << std::endl;
// 	return NULL;
// }

void	AMateria::use( ICharacter& target ) {
	( this->type == "Ice" ? std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl : std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl );
}