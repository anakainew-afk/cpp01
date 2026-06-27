/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 14:42:37 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 14:42:38 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "iostream"
#include "string"
#include "new"

class Weapon{
private:
    std::string _type;
public:
    Weapon(std::string str);
    void setType(std::string value);
    const std::string getType();
    ~Weapon();
};

#endif