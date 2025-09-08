/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 15:42:17 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std:: cout << "Dog Default Constructor is Called" << std::endl;
}

Dog::Dog(std::string Dog_type) : Animal(Dog_type)
{
	std:: cout << "Dog Parametric Constructor is Called" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
	std:: cout << "Dog Copy Constructor is Called" << std::endl;
}

Dog& Dog::operator=(const Dog& cpy)
{
	std:: cout << "Dog Assignment Oparator is Called" << std::endl;
	Animal::operator=(cpy);
	return (*this);
}

void Dog::makeSound() const 
{
	std:: cout << "Dog is bark" << std::endl;
}

Dog::~Dog()
{
	std:: cout << "Dog Default Destructor is Called" << std::endl;
}
