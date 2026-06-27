/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 14:42:35 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 15:05:54 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
private:
    std::string _nameB;
    Weapon *_weaponB;
public:
    HumanB(std::string name);
    void setWeapon(Weapon &club);
    void attack();
    ~HumanB();
};

#endif