/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/08 18:51:41 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	
}
IMateriaSource::IMateriaSource (const IMateriaSource& cpy)
{
	*this = cpy;
}
IMateriaSource& IMateriaSource::operator=(const IMateriaSource& cpy)
{
	(void) cpy;
	return (*this);
}