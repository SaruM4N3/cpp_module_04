/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 00:38:02 by zsonie            #+#    #+#             */
/*   Updated: 2026/02/05 00:32:13 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP
#include<string>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(std::string *ideas);
	Brain(const Brain &copy);
	Brain &operator=(const Brain &copy);
	~Brain();
    void setIdea(const std::string idea, const int index);
    void setIdeas(const std::string *ideas);
    std::string getIdea(int index);
    std::string *getIdeas();
};
#endif
