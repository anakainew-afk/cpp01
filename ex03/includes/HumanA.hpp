/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 14:42:30 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 14:42:31 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
private:
    std::string _nameA;
    Weapon &_weaponA;
public:
    HumanA(std::string name, Weapon &weapon);
    void attack();
    ~HumanA();
};

#endif