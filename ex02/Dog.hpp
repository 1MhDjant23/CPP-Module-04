#ifndef	DOG_HPP
#define	DOG_HPP

//#include "AAnimal.hpp"

class	Dog : public AAnimal
{
	private:
		Brain*	dBrain;
	public:
		Dog();
		~Dog();
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );
		void	makeSound() const;
};

#endif