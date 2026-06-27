/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimidhuama <kimidhuama@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:20:16 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 00:08:06 by kimidhuama       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(){
    
    Zombie  *heapZombie;

    randomChump("Foo");
    
    std::cout << std::endl;
    
    heapZombie = newZombie("");
    if (!heapZombie)
        return 1;
    heapZombie->annonce();
    delete heapZombie;
    return 0;
}