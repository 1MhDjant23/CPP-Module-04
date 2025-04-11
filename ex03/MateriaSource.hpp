#ifndef	MATERIASOURCE_HPP
#define	MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "utils.hpp"
class	MateriaSource : public	IMateriaSource
{
	private:
		AMateria*	materia[4];
	public:
		static	t_floor*	floor;
		MateriaSource();
		~MateriaSource();
		MateriaSource( const MateriaSource& other );
		MateriaSource&	operator=( const MateriaSource& other );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		static void	addFloor( t_floor **head, t_floor *other );
		static t_floor*	createFloor( AMateria *materia );
};

#endif