#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
	std::cout << "[ Default Base class called ]" << std::endl;
}

Animal::Animal( const std::string& type ) : type( type ) {
	std::cout << "[ Default Base class called ]" << std::endl;
}

Animal::Animal( const Animal& other ) {
	*this = other;
	std::cout << "[ Copy Constructor for Base class called ]" << std::endl;
}

Animal&	Animal::operator=( const Animal& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "{ Destructor for Base class called }" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Animal don't bark" << std::endl;
}

std::string	Animal::getType() const {
	return this->type;
}

std::string	Animal::getBrain( unsigned int idx ) const {
	(void)idx;
	return "NO BRAIN";
}

void	Animal::setBrain( std::string idea ) {
	(void)idea;
}