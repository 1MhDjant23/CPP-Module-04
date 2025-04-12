#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "NO IDEAS";
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
		for ( int i = 0; i < 100; i++ )
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

void	Brain::setIdeas( const std::string idea ) {
	for ( int i = 0; i < 100; i++ )
	{
		if ( this->ideas[i].compare("NO IDEAS") == 0 ) {
			this->ideas[i] = idea;
			return ;
		}
	}	
	std::cout << "Ooh No! can't have more ideas!?" << std::endl;
}

std::string	Brain::getIdeas( unsigned int i ) const {
	if ( i >= 0 && i < 100 )
		return this->ideas[i];
	return "EMPTY";
}
