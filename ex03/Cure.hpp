/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:03:01 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/30 16:40:39 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
# define CURE_HPP
#include"AMateria.hpp"

class Cure: public AMateria
{
public:
    Cure();
	Cure(std::string const &type);
	Cure(const Cure &copy);
	Cure &operator=(const Cure &copy);
    ~Cure();
    Cure *clone() const;
    void use(ICharacter &target);
};
#endif