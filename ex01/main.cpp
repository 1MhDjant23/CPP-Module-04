//#include "Animal.hpp"
//#include "Dog.hpp"
//#include "Cat.hpp"

void	ftt()
{
	system("leaks poly");
}

int main()
{
	atexit(ftt);
	Animal*	anm[4];

	for (int i = 0; i < 2; i++)
		anm[i] = new Dog();
	
	for (int i = 2; i < 4; i++)
		anm[i] = new Cat();
	// for (unsigned int i = 0; i < 8; i++)
	// {
	// 	std::cout << anm[i] << std::endl;
	// }
	
	for (int i = 0; i < 4; i++)
	{
		delete	anm[i];
	}
	return 0;
}
