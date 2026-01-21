/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/21 14:20:38 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "iostream"

Materia::Materia() : _type("Materia")
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Default constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Materia::Materia(std::string type)
    : _type(type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Materia::Materia(const Materia &copy)
    : _type(copy._type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Materia &Materia::operator=(const Materia &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy assignment operator called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
    return *this;
}

Materia::~Materia()
{
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on Materia of type: "
                  << GREEN << this->_type
                  << RESET << std::endl;
}
