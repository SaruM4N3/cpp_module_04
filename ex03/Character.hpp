/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:07:57 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/21 18:13:55 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<string>
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
};
