/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:28:01 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/26 21:38:31 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource
{
private:
    AMateria* _trash[4];
public:
    MateriaSource();
    MateriaSource(AMateria* items[4]);
    MateriaSource(const MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &copy);
    ~MateriaSource();
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};
#endif