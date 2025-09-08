/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 16:25:34 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std:: cout << "Animal Default Constructor is Called" << std::endl;
}

Animal::Animal(std::string animal_type) : type(animal_type)
{
	std:: cout << "Animal Parametric Constructor is Called" << std::endl;
}

Animal::Animal(const Animal& cpy) 
{
	*this = cpy;
	std:: cout << "Animal Copy Constructor is Called" << std::endl;
}

Animal& Animal::operator=(const Animal& cpy)
{
	if (this == &cpy)
		return (*this);
	type = cpy.getType();
	std:: cout << "Animal Assignment Oparator is Called" << std::endl;
	return (*this);
}

void Animal::makeSound() const
{
	std:: cout << "Animal Make Some Sounds" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}

Animal::~Animal()
{
	std:: cout << "Animal Default Destructor is Called" << std::endl;
}
