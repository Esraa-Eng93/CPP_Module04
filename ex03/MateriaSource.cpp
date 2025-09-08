/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/08 19:40:32 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MateriaSource.hpp"

MateriaSource::MateriaSource() : inventory()
{
}
MateriaSource::MateriaSource (const MateriaSource& cpy): IMateriaSource(), inventory()
{
	for (int i = 0; i < 4; i++)
	{
		if (cpy.inventory[i])
		inventory[i] = cpy.inventory[i]->clone();
	}	
}
MateriaSource& MateriaSource::operator=(const MateriaSource& cpy)
{
	if (this == &cpy)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory [i] = NULL;
		}
		if (cpy.inventory[i] != NULL)
			inventory[i] = cpy.inventory[i]->clone();
	}
	return *this;
}
void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while (i < 4)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = materia->clone();
			break;
		}
		i++;
	}
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] && inventory[i]->getType() == type)
			return (inventory[i]->clone());
	}
	return (0);
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete (inventory[i]);
	}
}