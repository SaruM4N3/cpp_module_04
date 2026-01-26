/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:02:28 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/25 23:42:20 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice: public AMateria
{
public:
    Ice();
	Ice(std::string const &type);
	Ice(const AMateria &copy);
	Ice &operator=(const AMateria &copy);
    ~Ice();
    Ice *clone() const;
    void use(ICharacter &target);
};
#endif