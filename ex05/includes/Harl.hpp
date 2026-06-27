/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:32:10 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 18:39:53 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include "iostream"
#include "string"

class Harl{
private:
    void debug();
    void info();
    void warnig();
    void error();
public:
    void complain(std::string level);
};

#endif