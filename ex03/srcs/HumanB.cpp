/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 14:42:43 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 15:05:45 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _nameB(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &club){
    _weaponB = &club;
}

void HumanB::attack(){
    std::cout << _nameB << " attacks with their " << _weaponB->getType() << std::endl;
}
