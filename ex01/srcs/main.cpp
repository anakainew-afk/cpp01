/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 16:31:23 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/26 19:41:02 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(){
    
    Zombie  *horde;
    std::string name;
    int N;
    int v;
    
    std::cout << "Number of zombies: " << std::endl;
    std::cin >> N;
    std::cout << "Name of the horde: " << std::endl;
    std::cin >> name;
    
    std::cout << std::endl;
    
    v = 0;
    horde = zombieHorde(N, name);
    while (v < N)
        horde[v++].annonce();
        
    std::cout << std::endl;

    delete[] horde;
    return 0;
}