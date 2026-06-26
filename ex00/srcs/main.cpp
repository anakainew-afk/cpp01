/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:20:16 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/26 16:23:27 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(){
    
    Zombie  *heapZombie;

    heapZombie = newZombie("Bart");
    heapZombie->annonce();
    delete heapZombie;
    
    std::cout << std::endl;

    randomChump("Foo");
    return 0;
}