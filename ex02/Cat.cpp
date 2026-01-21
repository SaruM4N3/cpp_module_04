/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/21 14:22:07 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "iostream"

Cat::Cat() : AAnimal()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    if (DEBUG_MODE)
        std::cout << CYAN << "Default constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Cat::Cat(std::string type)
    : AAnimal(type)
{
    this->_brain = new Brain();
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Cat::Cat(const Cat &copy)
    : AAnimal(copy), _brain(new Brain(*copy._brain))
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        *this->_brain = *copy._brain;
        this->_type = copy._type;
    }
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy assignment operator called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
    return *this;
}

Cat::~Cat()
{
    if (_brain)
        delete this->_brain;
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << BLUE << "AAnimal: "
              << GREEN << this->_type
              << BLUE << " is meowing!"
              << RESET << std::endl;
    return;
}

Brain *Cat::getBrain() const
{
    return this->_brain;
}