
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/06 21:06:49 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "iostream"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << CYAN << "Default constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
    : _type(type)
{
    std::cout << CYAN << "Paramaterized constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
    : _type(copy._type)
{
    std::cout << CYAN << "Copy constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
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

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "Destructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << BLUE << "Unknow WrongAnimal: "
              << GREEN << this->_type
              << BLUE << " make a weird sound!"
              << RESET << std::endl;
    return;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}
