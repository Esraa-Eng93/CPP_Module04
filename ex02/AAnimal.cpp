/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 22:00:16 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "AAnimal";
	std:: cout << "AAnimal Default Constructor is Called" << std::endl;
}

AAnimal::AAnimal(std::string animal_type) : type(animal_type)
{
	std:: cout << "AAnimal Parametric Constructor is Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& cpy) 
{
	*this = cpy;
	std:: cout << "AAnimal Copy Constructor is Called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& cpy)
{
	if (this == &cpy)
		return (*this);
	type = cpy.getType();
	std:: cout << "AAnimal Assignment Oparator is Called" << std::endl;
	return (*this);
}

void AAnimal::makeSound() const
{
	std:: cout << "AAnimal Make Some Sounds" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (type);
}

AAnimal::~AAnimal()
{
	std:: cout << "AAnimal Default Destructor is Called" << std::endl;
}
