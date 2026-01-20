/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/20 14:35:02 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "iostream"

Dog::Dog() : Animal()
{
    this->_brain = new Brain();
    this->_type = "Dog";
    if (DEBUG_MODE)
        std::cout << CYAN << "Default constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Dog::Dog(std::string type)
    : Animal(type)
{
    this->_brain = new Brain();
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Dog::Dog(const Dog &copy)
    : Animal(copy), _brain(new Brain(*copy._brain))
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
        *this->_brain = *copy._brain;
    }
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy assignment operator called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
    return *this;
}

Dog::~Dog()
{
    if (_brain)
        delete this->_brain;
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Brain *Dog::getBrain() const
{
    return this->_brain;
}

void Dog::makeSound() const
{
    std::cout << BLUE << "Animal: "
              << GREEN << this->_type
              << BLUE << " is barking!"
              << RESET << std::endl;
    return;
}
