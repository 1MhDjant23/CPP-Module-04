#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->dBrain = new Brain();
	this->type = "Dog";
	std::cout << "Dog starting ..." << std::endl;
}

Dog::~Dog() {
	delete this->dBrain;
	std::cout << this->type << " was died!" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal( other ) {
	*this = other;
	std::cout << "[ Dog Copy Constructor Called ]" << std::endl;
}

Dog&	Dog::operator=( const Dog& other ) {
	if ( this != &other ) {
		Animal::operator=( other );
		this->dBrain = new Brain();
		for ( int i = 0; i < 100; i++ )
			this->dBrain->setIdeas( other.dBrain->getIdeas(i) );
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "dog don't bark" << std::endl;
}

std::string	Dog::getBrain( unsigned int idx ) const {
	if ( idx >= 0 && idx < 100 )
		return this->dBrain->getIdeas(idx);
	return "(null)";
}

void	Dog::setBrain( std::string idea ) {
	this->dBrain->setIdeas( idea );
}