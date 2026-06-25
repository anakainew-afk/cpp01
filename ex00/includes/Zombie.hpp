/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:20:33 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/25 19:20:34 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie{
private:
    std::string _name;
public:
    Zombie(std::string name);
    void annonce();
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif