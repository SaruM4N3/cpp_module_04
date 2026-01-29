/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:02:59 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/29 19:47:50 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
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
