/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 14:42:48 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 14:42:49 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str) {}

Weapon::~Weapon() {}

void Weapon::setType(std::string value){

    if (value.empty()){
        std::cerr << "Error: no value registered." << std::endl;
        return ;
    }
    _type = value;
}

const std::string Weapon::getType(){

    const std::string &typeREF = _type;
    return typeREF;
}
