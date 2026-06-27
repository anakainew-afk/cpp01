/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimidhuama <kimidhuama@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:20:20 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 00:06:23 by kimidhuama       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie(std::string name){
    
    if (name.empty()){
        std::cerr << "No zombie in the heap" << std::endl;
        return NULL;
    }
    return (new Zombie(name));
}