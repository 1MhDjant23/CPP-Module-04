#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

AMateria::AMateria() : type("Unknown") {}

AMateria::AMateria( std::string const & type ) : type(type) {}

AMateria::AMateria( const AMateria& other ) {
	*this = other;
}

AMateria&	AMateria::operator=( const AMateria& other ) {
	(void)other;
	return *this;
}

AMateria::~AMateria() {}

std::string const &	AMateria::getType() const {
	return this->type;
}

void	AMateria::use( ICharacter& target ) {
	if ( this->type == "ice" )
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if ( this->type == "cure" )
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "* launches a " << this->type << " at " << target.getName() << " *" << std::endl;
}
/*===============================================*/

// AMateria*	Fire::clone() const 
// {
// 	AMateria*	mater = new Fire();
// 	return mater;
// }

// Fire::Fire()
// {
// 	this->type = "fire";
// }