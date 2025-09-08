/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 15:42:24 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std:: cout << "Cat Default Constructor is Called" << std::endl;
}

Cat::Cat(std::string cat_type) : Animal(cat_type)
{
	std:: cout << "Cat Parametric Constructor is Called" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	std:: cout << "Cat Copy Constructor is Called" << std::endl;
}

Cat& Cat::operator=(const Cat& cpy)
{
	std:: cout << "Cat Assignment Oparator is Called" << std::endl;
	Animal::operator=(cpy);
	return (*this);
}

void Cat::makeSound() const 
{
	std:: cout << "Cat is Miawo" << std::endl;
}

Cat::~Cat()
{
	std:: cout << "Cat Default Destructor is Called" << std::endl;
}
