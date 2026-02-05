/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:29:18 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/05 00:30:31 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
# define DOG_HPP
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
#endif
