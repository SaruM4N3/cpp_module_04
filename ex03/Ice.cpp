/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:02:28 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/25 23:44:38 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Default constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Ice::Ice(std::string const &type)
    : _type(type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Ice::Ice(const Ice &copy)
    : _type(copy._type)
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
        std::cout << RED << "Destructor called on Ice of type: "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

std::string const &Ice::getType() const
{
    return this->_type;
}

Ice *Ice::clone() const
{
    return NULL;
}

void Ice::use(ICharacter &target)
{
    if (this->_type == "ice")
    {
        std::cout << BLUE << "* shoots an ice bolt at " << CYAN << target.getName() << BLUE << " *" << std::endl;
        return;
    }
    else if (this->_type == "cure")
    {
        std::cout << GREEN << "* heals " << CYAN << target.getName() << GREEN << "'s wounds *" << std::endl;
        return;
    }
    return;
}
