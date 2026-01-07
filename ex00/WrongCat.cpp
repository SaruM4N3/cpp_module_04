/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 22:24:37 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/06 22:25:45 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "iostream"

WrongCat::WrongCat() : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << CYAN << "Default constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

WrongCat::WrongCat(std::string type)
    : WrongAnimal(type)
{
    std::cout << CYAN << "Paramaterized constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
    : WrongAnimal(copy)
{
    std::cout << CYAN << "Copy constructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
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

WrongCat::~WrongCat()
{
    std::cout << RED << "Destructor called on "
              << GREEN << this->_type
              << RESET << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << BLUE << "WrongAnimal: "
              << GREEN << this->_type
              << BLUE << " is meowing!"
              << RESET << std::endl;
    return;
}
