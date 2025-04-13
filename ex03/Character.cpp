#include "Character.hpp"
#include "MateriaSource.hpp"
#include "utils.hpp"

Character::Character() {
	this->name = "Jack";
	for ( int i = 0; i < 4; i++ )
		this->materia[i] = NULL;
}

Character::Character( const std::string& name ) : name( name ) {
		for ( int i = 0; i < 4; i++ )
			this->materia[i] = NULL;
}

Character::~Character() {
	for ( int i = 0; i < 4; i++ )
	{
		if ( this->materia[i] != NULL ) {
			delete this->materia[i];
			this->materia[i] = NULL;
		}
	}
}

Character::Character( const Character& other ) {
	for ( int i = 0; i < 4; i++ )
		this->materia[i] = NULL;
	*this = other;
}

Character&	Character::operator=( const Character& other ) {
	if ( this != &other ) {
		for ( int i = 0; i < 4; i++ ) {
			if ( this->materia[i] != NULL )
				delete	this->materia[i];
			this->materia[i] = other.materia[i]->clone();
		}
	}
	return *this;
}

std::string const &	Character::getName() const {
	return this->name;
}

void	Character::equip( AMateria* m ) {
	for ( int i = 0; i < 4; i++ )
	{
		if ( this->materia[i] == NULL )
		{
			this->materia[i] = m;
			break;
		}
	}
}

void	Character::unequip( int idx ) {
	if ( ( idx >= 0 && idx < 4 ) && this->materia[idx] != NULL )
	{
		MateriaSource::addFloor( &MateriaSource::floor, MateriaSource::createFloor( this->materia[idx] ) );
		this->materia[idx] = NULL;
	}
}

void	Character::use( int idx, ICharacter& target ) {
	if ( ( idx >= 0 && idx < 4 ) && this->materia[idx] != NULL ) {
		this->materia[idx]->use( target );
	}
}
