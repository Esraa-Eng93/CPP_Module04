/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/08 14:17:40 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& cpy) : AMateria(cpy)
{
}
Ice& Ice::operator=(const Ice& cpy)
{
	if (this == &cpy )
		return(*this);
	AMateria::operator=(cpy);
	return (*this);
}
AMateria* Ice::clone() const
{
	return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " * \n";
}
Ice::~Ice()
{
}