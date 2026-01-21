/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:07:52 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/21 14:23:30 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "colors.hpp"
#include "Brain.hpp"

#ifndef DEBUG_MODE
# define DEBUG_MODE 0
#endif

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
	virtual Brain *getBrain() const;
	std::string getType() const;
};
