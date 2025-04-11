#ifndef	CHARACTER_HPP
#define	CHARACTER_HPP

#include "ICharacter.hpp"
#include "utils.hpp"
class AMateria;

class	Character : public ICharacter
{
	private:
		std::string	name;
		AMateria*	materia[4];
		
	public:
		std::string const & getName() const;
		Character();
		Character( const std::string& name );
		virtual	~Character();
		Character( const Character& other );
		Character&	operator=( const Character& other );
		void	equip( AMateria* m );
		void	unequip( int idx );
		void	use( int idx, ICharacter& target );
};

#endif
