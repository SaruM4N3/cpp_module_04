/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:29:18 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/07 00:53:56 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	~Dog();
	void makeSound() const;
};
