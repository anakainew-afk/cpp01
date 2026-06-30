/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:40:39 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/30 19:32:51 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void Harl::debug(){
    std::cout << ">DEBUG" << std::endl;
}

void Harl::info(){
    std::cout << ">INFO" << std::endl;
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