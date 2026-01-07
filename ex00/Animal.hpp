/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:07:52 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/07 00:56:39 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

class Animal
{
protected:
    std::string _type;
public:
	Animal();
	Animal(std::string name);
	Animal(const Animal &copy);
	Animal &operator=(const Animal &copy);
	virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};
