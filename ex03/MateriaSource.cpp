#include "MateriaSource.hpp"

t_floor*	MateriaSource::floor = NULL;

MateriaSource::MateriaSource() {
	materia[0] = NULL, materia[1] = NULL, materia[2] = NULL, materia[3] = NULL;
}

MateriaSource::~MateriaSource() {
	for ( int i = 0; i < 4; i++ ) {
		if ( this->materia[i] )
			delete this->materia[i];
		this->materia[i] = NULL;
	}
	if ( this->floor )
	{
		t_floor	*tmp;
		while ( this->floor )
		{
			tmp = this->floor->next;
			if ( this->floor->materia )
				delete this->floor->materia;
			this->floor->materia = NULL;
			delete this->floor;
			this->floor = NULL;
			this->floor = tmp;
		}
		this->floor = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource& other ) {
	materia[0] = NULL, materia[1] = NULL, materia[2] = NULL, materia[3] = NULL;
	*this = other;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {
	if ( this != &other )
	{
		for ( int i = 0; i < 4; i++ )
		{
			if ( this->materia[i] )
				delete this->materia[i];
			this->materia[i] = other.materia[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria* materia ) {
	for ( int i = 0; i < 4; i++ )
	{
		if ( this->materia[i] == NULL )
		{
			this->materia[i] = materia->clone();
			delete	materia;
			return ;
		}
	}
	std::cout << "Inventory is full !" << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] && this->materia[i]->getType() == type)
			return this->materia[i]->clone();
	}
	std::cout << "Unknown type of Materia !!" << std::endl;
	return 0;
}

t_floor*	MateriaSource::createFloor( AMateria *materia ) {
	t_floor	*mater = new t_floor;
	mater->materia = materia;
	mater->next = NULL;
	return mater;
}

void	MateriaSource::addFloor( t_floor **head, t_floor *other ) {
	if ( !other )
		return ;
	if ( !*head ) {
		*head = other;
		return ;
	}
	t_floor	*tmp = *head;
	while ( tmp && tmp->next )
		tmp = tmp->next;
	tmp->next = other;
}
