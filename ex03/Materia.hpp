/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:07:52 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/21 14:19:39 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "colors.hpp"

#ifndef DEBUG_MODE
# define DEBUG_MODE 0
#endif

class Materia
{
protected:
	std::string _type;

public:
	Materia();
	Materia(std::string name);
	Materia(const Materia &copy);
	Materia &operator=(const Materia &copy);
	~Materia();

};
