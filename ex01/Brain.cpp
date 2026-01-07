/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 00:38:33 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/07 00:43:26 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
    std::cout << RED << "Destructor called on Animal of type: "
              << GREEN << this->_type
              << RESET << std::endl;
}
