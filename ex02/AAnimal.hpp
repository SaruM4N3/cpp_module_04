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
#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <string>
#include "colors.hpp"
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(std::string name);
	AAnimal(const AAnimal &copy);
	AAnimal &operator=(const AAnimal &copy);
	virtual ~AAnimal() = 0;

	virtual void makeSound() const = 0;
	virtual Brain *getBrain() const = 0;
	std::string getType() const;
};
#endif
