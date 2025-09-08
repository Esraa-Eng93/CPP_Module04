/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 22:01:12 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main ()
{
	std::cout << std:: endl << "========= Polymorphism =========" << std:: endl;
	const AAnimal* animal[20];
	for (int i = 0; i < 20; i++)
	{
		if ( i < 10)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << std:: endl << "========= Brain =========" << std:: endl;
	// Dog *d = new Dog();
	// d->get_brain().setIdea(0, "eat");
	// std::cout << d->get_brain().getIdea(0)<<"\n";
	animal[0]->get_brain().setIdea(0, "eat");
	animal[1]->get_brain().setIdea(1, "think");
	std::cout << animal[0]->get_brain().getIdea(0)<<"\n";
	std::cout << animal[1]->get_brain().getIdea(1)<<"\n";
	
	std::cout << std:: endl << "========= MakeSound =========" << std:: endl;
	for (int i = 0; i < 20; i++)
	{
		std:: cout << animal[i]->getType() << " : ";
		animal[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << std:: endl << "========= deep copy/ copy constructor =========" << std:: endl;
	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog(*dog1);

	delete dog1;
	delete dog2; 

	std::cout << std:: endl << "========= deep copy/ copy assignment operator =========" << std:: endl;
	Cat *cat1 = new Cat("cat1");
	Cat *cat2 = new Cat("cat2");
	*cat1 = *cat2;
	std::cout << cat1->getType()<<"\n";
	delete cat1;
	delete cat2; 
	
	std::cout << std:: endl << "========= Delete =========" << std:: endl;
	for (int i = 0; i < 20; i++)
		delete animal[i];


	return (0);
}