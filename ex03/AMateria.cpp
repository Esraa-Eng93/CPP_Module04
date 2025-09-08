/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/08 19:49:54 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

AMateria::AMateria()
{
	type = "None";
}
AMateria::AMateria(std::string const & type)
{
	this->type = type;
}
AMateria::AMateria(const AMateria& cpy)
{
	*this = cpy;
}
AMateria& AMateria::operator = (const AMateria& cpy)
{
	if(this == &cpy)
		return *this;
	type = cpy.type;
	return *this;	
}
std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}
AMateria::~AMateria()
{

}