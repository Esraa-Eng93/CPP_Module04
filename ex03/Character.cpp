/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/08 17:49:07 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character() : name("default"), inventory()
{
	// this case will make all inventory = nullptr
	// inventory[0] = nullptr; and so on
}
Character::Character(std::string const & char_name) : name(char_name), inventory()
{
}
Character::Character(const Character& cpy) : ICharacter(cpy), inventory()
{
	name = cpy.name;
	for (int i = 0; i < 4; i++)
	{
		if (cpy.inventory[i])
		inventory[i] = cpy.inventory[i]->clone();
	}
}
Character& Character::operator = (const Character& cpy)
{
	if (this == &cpy)
		return (*this);
	name = cpy.name;
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

std::string const & Character::getName() const
{
	return(name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Cannot unequip materia, invalid index " << idx << std::endl;
		return ;
	}
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
		inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		std::cout << "Cannot use materia, invalid index " << idx << std::endl;
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
		inventory[idx]->use(target);
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete (inventory[i]);
	}
}
