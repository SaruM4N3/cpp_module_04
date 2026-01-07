/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:20:13 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/07 00:41:11 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	~Cat();
	void makeSound() const;
};
