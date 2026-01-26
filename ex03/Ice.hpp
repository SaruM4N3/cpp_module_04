/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:02:28 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/26 20:40:11 by zsonie           ###   ########lyon.fr   */
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
	Ice(const Ice &copy);
	Ice &operator=(const Ice &copy);
    ~Ice();
    Ice *clone() const;
    void use(ICharacter &target);
};
#endif