#include "Character.hpp"
#include "MateriaSource.hpp"
#include "utils.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	// std::cout << "A Character was Created" << std::endl;
}

Character::Character( const std::string& name ) : name(name) {
		for (int i = 0; i < 4; i++)
			this->materia[i] = NULL;
	// std::cout << "Character " << this->name << " was Created .." << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL)
			delete this->materia[i];
	}
	// std::cout << "Character Destructed!" << std::endl;
}

Character::Character( const Character& other ) {
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	*this = other;
	// std::cout << "New Character Created" << std::endl;
}

Character&	Character::operator=( const Character& other ) {
	if ( this != &other ) {
		this->name = other.name;
		for (int i = 0; i < 4; i++) {
			if (this->materia[i] != NULL)
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
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			this->materia[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	if ( this->materia[idx] != NULL )
	{
		MateriaSource::addFloor(&MateriaSource::floor, MateriaSource::createFloor(this->materia[idx]));
		this->materia[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if ( (idx >= 0 && idx < 4) && this->materia[idx] != NULL ) {
		this->materia[idx]->use( target );
	}
}
