/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:07:57 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/29 19:46:22 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default"), _items()
{
    if (DEBUG_MODE)
        std::cout << BLUE << "Default constructor called on " << GREEN << this->_name << RESET << std::endl;
}

Character::Character(std::string name) : _name(name), _items()
{
    if (DEBUG_MODE)
        std::cout << BLUE << "Paramaterized constructor called on " << GREEN << this->_name << RESET << std::endl;
}
Character::Character(const Character &copy) : _name(copy._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._items[i])
            this->_items[i] = copy._items[i]->clone();
        else
            this->_items[i] = NULL;
    }
    if (DEBUG_MODE)
        std::cout << BLUE << "Copy constructor called on " << GREEN << this->_name << RESET << std::endl;
}
Character &Character::operator=(const Character &copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_items[i])
            {
                delete this->_items[i];
                this->_items[i] = NULL;
            }
            if (copy._items[i])
                this->_items[i] = copy._items[i]->clone();
        }
    }
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy assignment operator called on "
                  << GREEN << this->_name
                  << RESET << std::endl;
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_items[i])
            delete this->_items[i];
    }
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on Character : "
                  << GREEN << this->_name
                  << RESET << std::endl;
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;
    int i = 0;
    while(i < 4 && this->_items[i])
        i++;
    if (i >= 4)
        return;
    this->_items[i] = m;
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        return;
    if (this->_items[idx])
        this->_items[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && this->_items[idx])
        this->_items[idx]->use(target);
}
