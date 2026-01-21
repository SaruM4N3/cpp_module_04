/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:26:34 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/21 14:26:08 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include <sstream>
#include "colors.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

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
        Brain *tmp = array[i]->getBrain();
        tmp->setIdea("m'en bas les couilles N^" + sus.str(), 0);
        std::cout << array[i]->getBrain()->getIdea(0) << std::endl;
    }
    
    Animal *classicAnimal = new Animal;
    
    std::cout << "Test for Animal sound: " << std::endl;
    classicAnimal->makeSound();
    delete classicAnimal;
    
    for (int i = 0; i < 100; i++)
        delete array[i];

    delete[] array;
    return 0;
}
