/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:26:34 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/07 00:55:58 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Cat();
    const Animal* i = new Dog();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound! 
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete i;
    delete j;
    
    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongCat *wrongJ = new WrongCat();
    std::cout << wrongJ->getType() << " " << std::endl;
    
    wrongJ->makeSound();
    wrongMeta->makeSound();

    const WrongAnimal *wcat = new WrongCat();
    wcat->makeSound();
    delete wrongMeta;
    delete wrongJ;
    delete wcat;

    return 0;
}
