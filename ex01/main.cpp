/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:26:34 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/08 03:55:39 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdio.h>
#include <iostream>
#include <sstream>

int main()
{
    Animal **array = new Animal *[100];
    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            array[i] = new Cat();
        else
            array[i] = new Dog();
    }

    for (int i = 0; i < 100; i++)
    {
        std::stringstream sus("");
        sus << i;
        Brain* tmp = array[i]->getBrain();
        tmp->setIdea("m'en bas les couilles N^" + sus.str() , 0);
        std::cout << array[i]->getBrain()->getIdea(0) << std::endl;
    }

    for (int i = 0; i < 100; i++)
        delete array[i];

    delete[] array;
    return 0;
}
