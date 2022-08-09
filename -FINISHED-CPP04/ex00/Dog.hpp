#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);

		void makeSound(void) const;

		~Dog();
};

#endif