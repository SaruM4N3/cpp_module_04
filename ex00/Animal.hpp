/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:07:52 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/05 00:30:26 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <string>
#include "colors.hpp"

class Animal
{
protected:
    std::string _type;
public:
	Animal();
	Animal(std::string name);
	Animal(const Animal &copy);
	Animal &operator=(const Animal &copy);
	virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};
#endif
