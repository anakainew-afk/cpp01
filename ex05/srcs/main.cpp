/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:40:55 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/30 19:31:55 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(){
    
    Harl obj;
    std::string cmd;
    
    std::cout << "Select a level: " << std::endl;
    std::cin >> cmd;
    
    std::cout << '\n';

    obj.complain(cmd);
    return 0;
}