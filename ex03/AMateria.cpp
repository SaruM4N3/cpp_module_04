/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/25 23:43:06 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("DefaultMateria")
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Default constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

AMateria::AMateria(std::string const &type)
    : _type(type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

AMateria::AMateria(const AMateria &copy)
    : _type(copy._type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    if (this != &copy)
        this->_type = copy._type;
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy assignment operator called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
    return *this;
}

AMateria::~AMateria()
{
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on AMateria of type: "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

AMateria *AMateria::clone() const
{
    return NULL;
}

void AMateria::use(ICharacter &target)
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
