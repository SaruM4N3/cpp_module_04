/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 00:38:33 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/08 02:24:49 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << YELLOW << "Constructor default called on Brain"
              << RESET << std::endl;
}

Brain::Brain(std::string *ideas)
{
    this->setIdeas(ideas);
    std::cout << YELLOW << "Constructor parameterized called on Brain"
              << RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = copy._ideas[i];
    }
    std::cout << CYAN << "Copy assignment operator called on "
              << GREEN << this->_ideas[0]
              << RESET << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << RED << "Destructor called on "
              << BLUE << "Brain"
              << RESET << std::endl;
}

void Brain::setIdea(const std::string idea, const int index)
{
    this->_ideas[index] = idea;
}

void Brain::setIdeas(const std::string *ideas)
{
    for (int i = 0; i < 100; i++)
    {
        if (ideas[i][0])
            this->_ideas[i] = ideas[i];
        else
            this->_ideas[i][0] = 0;
    }
}

std::string Brain::getIdea(int index)
{
    return this->_ideas[index];
}

std::string *Brain::getIdeas()
{
    return this->_ideas;
}