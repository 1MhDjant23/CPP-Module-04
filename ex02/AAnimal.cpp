//#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "[ Default Base class called ]" << std::endl;
}

AAnimal::AAnimal( const AAnimal& other ) {
	*this = other;
	std::cout << "[ Copy Constructor for Base class called ]" << std::endl;
}

AAnimal&	AAnimal::operator=( const AAnimal& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "{ Destructor for Base class called }" << std::endl;
}

void	AAnimal::makeSound() const {
	std::cout << "AAnimal don't bark" << std::endl;
}

std::string	AAnimal::getType() const {
	return this->type;
}