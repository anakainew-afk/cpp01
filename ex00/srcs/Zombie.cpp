/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:20:28 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/26 16:13:34 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(){
     std::cout << _name << " has been terminated." << std::endl;
}

void    Zombie::annonce(){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}