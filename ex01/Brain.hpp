/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 00:38:02 by zsonie            #+#    #+#             */
/*   Updated: 2026/01/07 01:39:05 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<string>
#include<array>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(std::string name);
	Brain(const Brain &copy);
	Brain &operator=(const Brain &copy);
	~Brain();
    void setIdea(std::string idea);
    std::string getIdea();

};
