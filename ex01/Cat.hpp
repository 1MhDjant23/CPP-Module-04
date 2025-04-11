#ifndef	CAT_HPP
#define	CAT_HPP

//#include "Animal.hpp"

class	Cat : public Animal
{
	private:
		Brain*	cBrain;
	public:
		Cat();
		~Cat();
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );
		void	makeSound() const;
};

#endif
