/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/20 14:32:19 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "iostream"

Animal::Animal() : _type("Animal")
{
    if (DEBUG_MODE)
    std::cout << CYAN << "Default constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

Animal::Animal(std::string type)
    : _type(type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Animal::Animal(const Animal &copy)
    : _type(copy._type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    std::cout << CYAN << "Copy assignment operator called on "
              << GREEN << this->_type
              << RESET << std::endl;
    return *this;
}

Animal::~Animal()
{
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on Animal of type: "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

void Animal::makeSound() const
{
    std::cout << BLUE << "Unknow Animal: "
              << GREEN << this->_type
              << BLUE << " is animaling!"
              << RESET << std::endl;
    return;
}

std::string Animal::getType() const
{
    return this->_type;
}

Brain *Animal::getBrain() const
{
    return NULL;
}