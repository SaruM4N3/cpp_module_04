/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/20 14:32:19 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "iostream"

AAnimal::AAnimal() : _type("AAnimal")
{
    if (DEBUG_MODE)
    std::cout << CYAN << "Default constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

AAnimal::AAnimal(std::string type)
    : _type(type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Paramaterized constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
    : _type(copy._type)
{
    if (DEBUG_MODE)
        std::cout << CYAN << "Copy constructor called on "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
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

AAnimal::~AAnimal()
{
    if (DEBUG_MODE)
        std::cout << RED << "Destructor called on AAnimal of type: "
                  << GREEN << this->_type
                  << RESET << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << BLUE << "Unknow AAnimal: "
              << GREEN << this->_type
              << BLUE << " is AAnimaling!"
              << RESET << std::endl;
    return;
}

std::string AAnimal::getType() const
{
    return this->_type;
}

Brain *AAnimal::getBrain() const
{
    return NULL;
}