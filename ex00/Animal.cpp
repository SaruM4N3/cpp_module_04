/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:14:32 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/06 19:14:48 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "iostream"

Animal::Animal()
{
    std::cout << CYAN << "Default constructor called on "
              << GREEN << this->_name
              << RESET << std::endl;
}

Animal::Animal(std::string name)
    : _type(type)
{
    std::cout << CYAN << "Paramaterized constructor called on "
              << GREEN << this->_name
              << RESET << std::endl;
}

Animal::Animal(const Animal &copy)
    : _name(copy._name), _hitPoint(copy._hitPoint), _energyPoint(copy._energyPoint), _attackDmg(copy._attackDmg)
{
    std::cout << CYAN << "Copy constructor called on "
              << GREEN << this->_name
              << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoint = copy._hitPoint;
        this->_energyPoint = copy._energyPoint;
        this->_attackDmg = copy._attackDmg;
    }
    std::cout << CYAN << "Copy assignment operator called on "
              << GREEN << this->_name
              << RESET << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << RED << "Destructor called on "
              << GREEN << this->_name
              << RESET << std::endl;
}

void Animal::attack(const std::string &target)
{
    if (this->_hitPoint == 0)
    {
        std::cout << BLUE << "Animal "
                  << GREEN << this->_name
                  << YELLOW << " try an attack but cannot"
                  << RED << " because already dead!"
                  << RESET << std::endl;
        return;
    }
    if (this->_energyPoint == 0)
    {
        std::cout << BLUE << "Animal "
                  << GREEN << this->_name
                  << YELLOW << " try an attack but cannot"
                  << RED << " doesnt have enough energy to attack"
                  << RESET << std::endl;
        return;
    }
    this->_energyPoint--;
    std::cout << BLUE << "Animal "
              << GREEN << this->_name
              << YELLOW << " attacks "
              << GREEN << target
              << YELLOW << ", causing "
              << CYAN << this->_attackDmg
              << YELLOW << " points of damage!"
              << RESET << std::endl;
}

void Animal::takeDamage(unsigned int amount)
{
    if (this->_hitPoint == 0)
    {
        std::cout << BLUE << "Animal "
                  << GREEN << this->_name
                  << YELLOW << " cannot take damage"
                  << RED << " because already dead!"
                  << RESET << std::endl;
        return;
    }
    if (amount >= this->_hitPoint)
        this->_hitPoint = 0;
    else
        this->_hitPoint -= amount;
    std::cout << BLUE << "Animal "
              << GREEN << this->_name
              << YELLOW << " takes "
              << CYAN << amount
              << YELLOW << " dmg! Current hitPoint: "
              << CYAN << this->_hitPoint
              << RESET << std::endl;
}

void Animal::beRepaired(unsigned int amount)
{
    if (this->_hitPoint == 0)
    {
        std::cout << BLUE << "Animal "
                  << GREEN << this->_name
                  << YELLOW << " cannot repair"
                  << RED << " because already dead!"
                  << RESET << std::endl;
        return;
    }
    if (this->_energyPoint == 0)
    {
        std::cout << BLUE << "Animal "
                  << GREEN << this->_name
                  << YELLOW << " doesnt have enough energy to repairs itself!"
                  << RESET << std::endl;
        return;
    }
    this->_energyPoint--;
    this->_hitPoint += amount;
    std::cout << BLUE << "Animal "
              << GREEN << this->_name
              << YELLOW << " repairs itself for "
              << CYAN << amount
              << YELLOW << " HP!"
              << std::endl
              << MAGENTA << "Current HP: "
              << CYAN << this->_hitPoint
              << RESET << std::endl;
}
