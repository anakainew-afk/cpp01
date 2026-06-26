/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimidhuama <kimidhuama@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 16:31:08 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 00:20:24 by kimidhuama       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iomanip>
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