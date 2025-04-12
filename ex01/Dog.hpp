#ifndef	DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"


class	Dog : public Animal
{
	private:
		Brain*	dBrain;
	public:
		Dog();
		~Dog();
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );
		void	makeSound() const;
		std::string	getBrain( unsigned int idx ) const;
		void	setBrain( std::string idea );

};

#endif