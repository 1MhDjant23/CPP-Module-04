//#include "AAnimal.hpp"
//#include "Dog.hpp"
//#include "Cat.hpp"

void	ftt()
{
	system("leaks poly");
}

int main()
{
	// atexit(ftt);
	AAnimal	aa;
	AAnimal*	anm[8];

	for (int i = 0; i < 4; i++)
		anm[i] = new Dog();
	
	for (int i = 4; i < 8; i++)
		anm[i] = new Cat();
	for (int i = 0; i < 8; i++)
	{
		delete	anm[i];
	}
	
	return 0;
}
