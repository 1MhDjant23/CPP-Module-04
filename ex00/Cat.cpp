//#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat starting ..." << std::endl;
}

Cat::~Cat() {
	std::cout << this->type << " was died!" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal( other ) {
	*this = other;
	std::cout << "[ Cat Copy Constructor Called ]" << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {
	if ( this != &other )
		Animal::operator=( other );
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "cats don't bark" << std::endl;
}