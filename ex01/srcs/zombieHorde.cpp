/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 16:31:27 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/26 19:28:47 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

    Zombie  *newZ;
    int v;
    
    if (name.empty() || (N < 1 && N >= 100))
        return NULL;
    v = 0;
    newZ = new Zombie[N];
    while (v < N){
        newZ[v].setName(name);
        v++;
    }
    return newZ;
}