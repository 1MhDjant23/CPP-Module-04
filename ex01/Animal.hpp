#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal( const std::string& type );
		Animal( const Animal& other );
		Animal&	operator=( const Animal& other );
		virtual	~Animal();
		virtual	void	makeSound() const;
		std::string	getType() const;
		virtual	std::string	getBrain( unsigned int idx ) const;
		virtual	void	setBrain( std::string idea );

};

#endif