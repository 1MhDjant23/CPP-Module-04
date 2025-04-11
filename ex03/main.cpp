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
	// me->unequip(1);
	// while (MateriaSource::floor)
	// {
	// 	std::cout << "type is "<< MateriaSource::floor->materia->getType() << std::endl;
	// 	MateriaSource::floor = MateriaSource::floor->next;
	// }
	
	delete bob;
	delete me;
	delete src;
	// delete	tmp;
	return 0;
}