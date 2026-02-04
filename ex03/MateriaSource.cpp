/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:42:49 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/04 22:26:32 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _trash()
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Default constructor called on "
                  << GREEN << "MATERIASOURCE"
                  << RESET << std::endl;
}

MateriaSource::MateriaSource(AMateria *items[4]) : _trash()
{
    for (int i = 0; i < 4; i++)
    {
        if (items && items[i])
            this->_trash[i] = items[i]->clone();
        else
            this->_trash[i] = NULL;
    }
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << "MATERIASOURCE"
                  << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << "MATERIASOURCE"
                  << RESET << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_trash[i])
            {
                delete this->_trash[i];
                this->_trash[i] = NULL;
            }
            if (copy._trash[i])
                this->_trash[i] = copy._trash[i]->clone();
        }
    }
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy assignment operator called on "
                  << GREEN << "MATERIASOURCE"
                  << RESET << std::endl;
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_trash[i])
            delete this->_trash[i];
    }
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on "
                  << GREEN << "MATERIASOURCE"
                  << RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!this->_trash[i])
        {
            this->_trash[i] = m;
            return;
        }
    }
    delete m;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_trash[i] && this->_trash[i]->getType() == type)
            return this->_trash[i]->clone();
    }
    return NULL;
}
