/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:20:13 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/05 00:43:38 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
# define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	~Cat();
	Brain* getBrain() const;
	void makeSound() const;
};
#endif
