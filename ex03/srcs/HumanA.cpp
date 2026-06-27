/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 14:42:41 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 14:49:58 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) : _nameA(name), _weaponA(weaponA) {}

HumanA::~HumanA() {}

void HumanA::attack(){
    std::cout << _nameA << " attacks with their " << _weaponA.getType() << std::endl;
}