/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 16:31:08 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/26 18:49:37 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>
#include <new>

class Zombie{
private:
    std::string _name;
public:
    Zombie();
    void setName(std::string name);
    void annonce();
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif