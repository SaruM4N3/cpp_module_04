/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:07:57 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/04 22:14:03 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include<string>
#include"ICharacter.hpp"
#include"AMateria.hpp"

class Character: public ICharacter
{
private:
    std::string _name;
    AMateria* _items[4];
    
public:
    Character();
    Character(std::string name);
    Character(const Character &copy);
	Character &operator=(const Character &copy);
    ~Character();
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    AMateria *getMateria(int idx);
};
#endif