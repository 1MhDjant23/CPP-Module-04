#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "utils.hpp"

int main()
{
	/*--------------------------------------------------------------*/
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
	delete bob;
	delete me;
	delete src;
	return 0;
	/*--------------------------------------------------------------*/
	//================== other scenario ==============
	// IMateriaSource*	src = new MateriaSource();
	// src->learnMateria( new Ice() );
	// src->learnMateria( new Cure() );
	// src->learnMateria( new Fire() );

	// ICharacter*	hero = new Character("Hero");
	// ICharacter* villain = new Character("Villain");

	// hero->equip(src->createMateria("ice"));
	// hero->equip(src->createMateria("fire"));
	// villain->equip(src->createMateria("cure"));

	// hero->use(1, *villain);
	// villain->use(0, *villain);

	// hero->unequip(0);
	// hero->equip(src->createMateria("cure"));

	// delete	src;
	// delete hero;
	// delete	villain;
	//================================================================*/
	/****************************************************************/
	// MateriaSource* src = new MateriaSource();
    // src->learnMateria(new Fire());
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());

    // Character* hero = new Character("Hero");
    // Character* villain = new Character("Villain");

    // hero->equip(src->createMateria("fire"));
    // hero->equip(src->createMateria("ice"));

    // villain->equip(src->createMateria("cure"));

    // // Hero attacks Villain
    // hero->use(0, *villain); // Hero uses "fire" on Villain
    // hero->use(1, *villain); // Hero uses "ice" on Villain

    // // Villain heals themselves
    // villain->use(0, *villain); // Villain uses "cure" on themselves

    // // Hero switches materia
    // hero->unequip(1);
    // hero->equip(src->createMateria("lightning"));
	// delete	src;
	// delete	hero;
	// delete	villain;
	/****************************************************************/
}