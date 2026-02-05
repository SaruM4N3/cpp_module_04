/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:26:34 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/05 01:51:10 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << YELLOW
              << "--------------------SUBJECT TEST------------------------"
              << RESET << std::endl;
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    std::cout << YELLOW
              << "--------------------UNEQUIP TEST------------------------"
              << RESET << std::endl;
    IMateriaSource *source = new MateriaSource();
    source->learnMateria(new Ice());
    Character *you = new Character("you");
    ICharacter *target = new Character("target");
    AMateria *temp;

    temp = source->createMateria("ice");
    you->equip(temp);
    you->use(0, *target);
    temp = you->getMateria(0);
    you->unequip(0);
    delete temp;

    // test with null
    temp = you->getMateria(1);
    you->unequip(1);
    delete temp;

    delete source;
    delete you;
    delete target;

    return 0;
}
