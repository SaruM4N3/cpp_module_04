/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:03:01 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/25 22:11:25 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
# define CURE_HPP
#include"AMateria.hpp"

class Cure: public AMateria
{
private:

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