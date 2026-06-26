/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimidhuama <kimidhuama@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 16:31:23 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 00:45:24 by kimidhuama       ###   ########.fr       */
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
    if (N < 1 || N >= 100000){
        std::cout << std::endl;
        std::cerr << "Invalid number." << std::endl;
        return 1;
    }
    std::cin.ignore();
    std::cout << "Name of the horde: " << std::endl;
    if(!std::getline(std::cin, name))
        return 1;
    if (name.empty()){
        std::cerr << "Invalid name." << std::endl;
        return 1;
    }
    
    std::cout << std::endl;
    
    v = 0;
    horde = zombieHorde(N, name);
    if (!horde)
        return 1;
    while (v < N)
        horde[v++].annonce();
        
    std::cout << std::endl;

    delete[] horde;
    return 0;
}