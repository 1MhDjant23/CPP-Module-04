//#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->dBrain = new Brain;
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
	if ( this != &other )
		Animal::operator=( other );
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "dog don't bark" << std::endl;
}
