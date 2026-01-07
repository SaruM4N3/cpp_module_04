/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:29:18 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/06 22:15:34 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	~Dog();
	void makeSound() const;
};
