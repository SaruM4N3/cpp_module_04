/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 22:19:06 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/05 00:30:37 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

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
#endif
