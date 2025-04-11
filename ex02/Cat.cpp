//#include "Cat.hpp"

Cat::Cat() : AAnimal() {
	this->cBrain = new Brain;
	this->type = "Cat";
	std::cout << "Cat starting ..." << std::endl;
}

Cat::~Cat() {
	delete this->cBrain;
	std::cout << this->type << " was died!" << std::endl;
}

Cat::Cat( const Cat& other ) : AAnimal( other ) {
	*this = other;
	std::cout << "[ Cat Copy Constructor Called ]" << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {
	if ( this != &other )
		AAnimal::operator=( other );
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "cats don't bark" << std::endl;
}