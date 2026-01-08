/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/08 03:42:04 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "iostream"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << CYAN << "Default constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

Cat::Cat(std::string type)
    : Animal(type)
{
    this->_brain = new Brain();
    std::cout << CYAN << "Paramaterized constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

Cat::Cat(const Cat &copy)
    : Animal(copy), _brain(new Brain(*copy._brain))
{
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
    std::cout << CYAN << "Copy assignment operator called on "
              << GREEN << this->_type
              << RESET << std::endl;
    return *this;
}

Cat::~Cat()
{
    if (_brain)
        delete this->_brain;
    std::cout << RED << "Destructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << BLUE << "Animal: "
              << GREEN << this->_type
              << BLUE << " is meowing!"
              << RESET << std::endl;
    return;
}

Brain *Cat::getBrain() const
{
    return this->_brain;
}