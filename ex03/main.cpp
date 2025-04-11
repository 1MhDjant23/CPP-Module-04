#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "utils.hpp"

void	lek() {
	system("leaks MateriaSystem");
}

int main()
{
	atexit(lek);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->unequip(1);
	// t_floor	*head;
	// head = MateriaSource::floor;
	// while ( head )
	// {
	// 	std::cout << "type is "<< head->materia->getType() << std::endl;
	// 	head = head->next;
	// }
	
	delete bob;
	delete me;
	delete src;
	// delete	tmp;
	return 0;
}