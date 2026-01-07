/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:07:52 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/06 22:19:51 by zsonie           ###   ########lyon.fr   */
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

class WrongAnimal
{
protected:
    std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &copy);
	~WrongAnimal();

    void makeSound() const;
    std::string getType() const;
};
