/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:40:39 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/30 20:14:05 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle" <<
    "-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
    std::cout << ">WARNING" << std::endl;
}

void Harl::error(){
    std::cout << ">ERROR" << std::endl;
}

void Harl::complain(std::string level){

    std::string levels[] = {"debug", "info", "warning", "error"};
    void (Harl::*ptr[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for (size_t v = 0; v < 4; v++){
        if (level == levels[v]){
            (this->*ptr[v])();
            return;
        }
    }
    return;
}