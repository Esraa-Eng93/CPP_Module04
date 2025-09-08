/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/07 21:56:53 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string animal_type);
		AAnimal(const AAnimal& cpy);
		AAnimal& operator=(const AAnimal& cpy);
		virtual void makeSound() const = 0;
		std::string getType(void) const;
		virtual Brain	&get_brain(void) const = 0;
		virtual ~AAnimal();
};
#endif
 