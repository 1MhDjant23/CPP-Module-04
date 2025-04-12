#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	ftt()
{
	system("leaks poly");
}

int main()
{
	atexit(ftt);
	Cat	ct;

	// Animal	*anm = new Cat();

	// // anm->makeSound();
	for (int i = 0; i < 100; i++)
	{
		ct.setBrain("What is it!?");
		std::cout << ct.getBrain(i) << std::endl;
		// anm.
	}
	// anm->setBrain("nothing!?");
	Cat	ss(ct);
	ss.setBrain("ddd");
	for (int i = 0; i < 100; i++)
	{
		std::cout << ss.getBrain(i) << std::endl;
	}
	
	// delete anm;
	// Animal*	anm[4];

	// for (int i = 0; i < 2; i++)
	// 	anm[i] = new Dog();
	
	// for (int i = 2; i < 4; i++)
	// 	anm[i] = new Cat();
	// // for (int i = 2; i < 4; i++)
	// // {
	// // 	anm[i].
	// // }
	
	// // for (unsigned int i = 0; i < 8; i++)
	// // {
	// // 	std::cout << anm[i] << std::endl;
	// // }
	
	// for (int i = 0; i < 4; i++)
	// {
	// 	delete	anm[i];
	// }
	return 0;
}
