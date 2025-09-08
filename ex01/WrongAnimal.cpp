/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 16:36:10 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std:: cout << "WrongAnimal Default Constructor is Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string animal_type) : type(animal_type)
{
	std:: cout << "WrongAnimal Parametric Constructor is Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy) 
{
	*this = cpy;
	std:: cout << "WrongAnimal Copy Constructor is Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cpy)
{
	if (this == &cpy)
		return (*this);
	type = cpy.type;
	std:: cout << "WrongAnimal Assignment Oparator is Called" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std:: cout << "WrongAnimal Make Some Sounds" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

WrongAnimal::~WrongAnimal()
{
	std:: cout << "Animal Default Destructor is Called" << std::endl;
}
