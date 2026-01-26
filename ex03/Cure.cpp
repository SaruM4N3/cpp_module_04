/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:02:59 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/26 15:22:25 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Default constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Cure::Cure(std::string const &type)
    : AMateria(type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Cure::Cure(const Cure &copy)
    : AMateria(copy)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    if (this != &copy)
        this->_type = copy._type;
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy assignment operator called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
    return *this;
}

Cure::~Cure()
{
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on Cure Materia : "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Cure *Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter &target)
{
    std::cout << GREEN << "* heals " << CYAN << target.getName() << GREEN << "'s wounds *" << std::endl;
    return;
}
