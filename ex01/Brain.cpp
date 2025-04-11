//#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[ Braiiiiiin ]" << std::endl;
}

Brain::~Brain() {
	std::cout << "No Brain more!" << std::endl;
}

Brain::Brain( const Brain& other ) {
	*this = other;
	std::cout << "[ Copy Braiiiiiin ]" << std::endl;
}

Brain&	Brain::operator=( const Brain& other ) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;	
}

void	Brain::setIdeas( const std::string& idea, unsigned int i ) {
	this->ideas[i] = idea;
}

const	std::string&	Brain::getIdeas( unsigned int i ) const {
	return this->ideas[i];
}
