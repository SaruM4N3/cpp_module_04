/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:07:52 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/21 14:21:04 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "colors.hpp"
#include "Brain.hpp"

#ifndef DEBUG_MODE
# define DEBUG_MODE 0
#endif

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(std::string name);
	AAnimal(const AAnimal &copy);
	AAnimal &operator=(const AAnimal &copy);
	virtual ~AAnimal();

	virtual void makeSound() const;
	virtual Brain *getBrain() const;
	std::string getType() const;
};
