/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 22:19:06 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/06 22:19:38 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &copy);
	~WrongCat();
	void makeSound() const;
};
