/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 16:11:21 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
		ideas[i] = "empty";
	std::cout << "Brain Default constructor is called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "Brain Copy constructor is called" << std::endl;
	for (int i = 0; i < 100; i++)
        ideas[i] = cpy.ideas[i];
}

Brain& Brain::operator=(const Brain& cpy)
{
	std::cout << "Brain Copy Assignment Operator is called" << std::endl;
	if ( this == &cpy )
		return (*this);
	std::copy(cpy.ideas, cpy.ideas + 100 , this->ideas);
	//std::copy( first, last, destination );
	return (*this);
}

std::string Brain::getIdea(int i) const
{
	return (ideas[i]);
}

void Brain::setIdea(int i, std::string value)
{
	ideas[i] = value;
}

Brain::~Brain()
{
	std::cout << "Brain Default Destructor is called" << std::endl;
}