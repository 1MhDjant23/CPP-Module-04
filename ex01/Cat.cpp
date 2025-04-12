#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->cBrain = new Brain();
	std::cout << "Cat starting ..." << std::endl;
}

Cat::~Cat() {
	delete this->cBrain;
	std::cout << this->type << " was died!" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal( other ) {
	*this = other;
	std::cout << "[ Cat Copy Constructor Called ]" << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {
	if ( this != &other ) {
		Animal::operator=( other );
		this->cBrain = new Brain();
		for ( int i = 0; i < 100; i++ ) {
			this->cBrain->setIdeas( other.cBrain->getIdeas(i) );
		}		
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "cats don't bark" << std::endl;
}

std::string	Cat::getBrain( unsigned int idx ) const {
	if ( idx >= 0 && idx < 100 )
		return this->cBrain->getIdeas(idx);
	return "(null)";
}

void	Cat::setBrain( std::string idea ) {
	this->cBrain->setIdeas( idea );
}