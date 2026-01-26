/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:02:28 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/26 15:21:28 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Default constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Ice::Ice(std::string const &type)
    : AMateria(type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Ice::Ice(const Ice &copy)
    : AMateria(copy)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
    if (this != &copy)
        this->_type = copy._type;
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy assignment operator called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
    return *this;
}

Ice::~Ice()
{
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on Ice Materia : "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Ice *Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter &target)
{
    std::cout << BLUE << "* shoots an ice bolt at " << CYAN << target.getName() << BLUE << " *" << std::endl;
    return;
}
