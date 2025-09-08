/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 15:42:02 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std:: cout << "WrongCat Default Constructor is Called" << std::endl;
}

WrongCat::WrongCat(std::string cat_type) : WrongAnimal(cat_type)
{
	std:: cout << "WrongCat Parametric Constructor is Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy)
{
	std:: cout << "WrongCat Copy Constructor is Called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cpy)
{
	std:: cout << "WrongCat Assignment Oparator is Called" << std::endl;
	WrongAnimal::operator=(cpy);
	return (*this);
}

void WrongCat::makeSound() const 
{
	std:: cout << "WrongCat is Miawo" << std::endl;
}

WrongCat::~WrongCat()
{
	std:: cout << "WrongCat Default Destructor is Called" << std::endl;
}
