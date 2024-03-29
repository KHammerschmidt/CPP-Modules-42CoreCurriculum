#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	//main from subject
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;


	// create an array of Animal objects, allocate for half Dog and Cat objects,
	// loop over array and delete every Animal
	int i = 4;
	const Animal*	 animals[i];

	for (int j = 0; j < i; j++)
	{
		if (j % 2)
			animals[j] = new Dog();
		else
			animals[j] = new Cat();
	}

	for (int j = 0; j < i; j ++)
		delete animals[j];

	// test that copy of a cat or a dog is not shallow
	// Cat*	cat1 = new Cat();
	// cat1->getBrain()->ideas[0] = "THIS IS THE CONTENT YOU'RE CHECKING!!!";
	// Cat*	cat2 = new Cat(*cat1);

	// delete cat1;
	// std::cout << cat2->getBrain()->ideas[0] << std::endl;
	// delete cat2;

	// system("leaks brain");

	return 0;
}