/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 16:19:39 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
	type = "Cat";
	brain = new Brain();
	std:: cout << "Cat Default Constructor is Called" << std::endl;
}

Cat::Cat(std::string cat_type) : Animal(cat_type)
{
	brain = new Brain();
	std:: cout << "Cat Parametric Constructor is Called" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	std:: cout << "Cat Copy Constructor is Called" << std::endl;
	brain = new Brain(*cpy.brain);
}

Cat& Cat::operator=(const Cat& cpy)
{
	std:: cout << "Cat Assignment Oparator is Called" << std::endl;
	Animal::operator=(cpy);
	delete brain;
	brain = new Brain(*cpy.brain);
	return (*this);
}

void Cat::makeSound() const 
{
	std:: cout << "Cat is Miawo" << std::endl;
}

Brain	&Cat::get_brain(void) const
{
	return (*brain);
}

Cat::~Cat()
{
	delete(brain);
	std:: cout << "Cat Default Destructor is Called" << std::endl;
}
