/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimidhuama <kimidhuama@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 16:31:27 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 00:33:01 by kimidhuama       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

    Zombie  *newZ;
    int v;
    
    try{
        v = 0;
        newZ = new Zombie[N];
        while (v < N){
            newZ[v].setName(name);
        v++;
        }
        return newZ;
    }
    catch (const std::bad_alloc& death){
        std::cerr << death.what() << std::endl;
        return NULL;
    }
}