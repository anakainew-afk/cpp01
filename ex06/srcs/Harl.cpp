/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimidhuama <kimidhuama@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:40:39 by pmalumba          #+#    #+#             */
/*   Updated: 2026/07/01 07:17:35 by kimidhuama       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void Harl::debug(){
    std::cout << "[ DEBUG ]" << '\n';
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle" <<
    "-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(){
    std::cout << '\n';
    std::cout << "[ INFO ]" << '\n';
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
    std::cout << '\n';
    std::cout << "[ WARNING ]" << '\n';
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(){
    std::cout << '\n';
    std::cout << "[ ERROR ]" << '\n';
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int v = 0;
    
    while (v < 4 && level != levels[v])
        v++;
    switch (v){
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return;
}
    