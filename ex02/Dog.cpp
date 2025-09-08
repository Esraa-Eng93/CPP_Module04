/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 21:59:17 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std:: cout << "Dog Default Constructor is Called" << std::endl;
}

Dog::Dog(std::string Dog_type) : AAnimal(Dog_type)
{
	brain = new Brain();
	std:: cout << "Dog Parametric Constructor is Called" << std::endl;
}

Dog::Dog(const Dog& cpy) : AAnimal(cpy)
{
	std:: cout << "Dog Copy Constructor is Called" << std::endl;
	brain = new Brain(*cpy.brain);
}

Dog& Dog::operator=(const Dog& cpy)
{
	std:: cout << "Dog Assignment Oparator is Called" << std::endl;
	AAnimal::operator=(cpy);
	delete brain;
	brain = new Brain(*cpy.brain);
	return (*this);
}

void Dog::makeSound() const 
{
	std:: cout << "Dog is bark" << std::endl;
}

Brain	&Dog::get_brain(void) const
{
	return (*brain);
}

Dog::~Dog()
{
	std:: cout << "Dog Default Destructor is Called" << std::endl;
	delete brain;
}
