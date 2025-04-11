#ifndef	CURE_HPP
#define	CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;

class	Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure( const Cure& other );
		Cure&	operator=( const Cure& other );
		AMateria*	clone() const;
};

#endif
