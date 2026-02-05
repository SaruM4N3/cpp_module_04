/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:29:18 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/05 00:43:55 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
# define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);
	~Dog();
	Brain* getBrain() const;
	void makeSound() const;
};
#endif
