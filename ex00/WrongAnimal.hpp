/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:07:52 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/05 00:30:42 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <string>
#include "colors.hpp"

class WrongAnimal
{
protected:
    std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &copy);
	~WrongAnimal();

    void makeSound() const;
    std::string getType() const;
};
#endif
