/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:03:01 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/26 16:00:24 by zsonie           ###   ########lyon.fr   */
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
	Cure(const AMateria &copy);
	Cure &operator=(const AMateria &copy);
    ~Cure();
    Cure *clone() const;
    void use(ICharacter &target);
};
#endif