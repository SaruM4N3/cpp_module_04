/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:07:52 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/07 00:40:58 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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
	~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};
