/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 16:31:25 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/26 18:49:19 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() : _name("") {}

Zombie::~Zombie(){
    std::cout << _name << " has been terminated." << std::endl;
}

void Zombie::setName(std::string name){
    _name = name;
}

void    Zombie::annonce(){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}