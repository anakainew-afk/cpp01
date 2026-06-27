/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalumba <pmalumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 16:26:52 by pmalumba          #+#    #+#             */
/*   Updated: 2026/06/27 18:25:15 by pmalumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int ac, char **av){

    std::string newfile;
    std::string content;
    std::string line;
    bool flag = false;
    size_t start;
    
    if (ac != 4){
        std::cerr << "Error: invalid parameters" << '\n';
        return 1;
    }
    
    std::ifstream file(av[1]);
    if (!file.is_open()){
        std::cerr << "Error: cannot open file" << std::endl;
        return 1;
    }

    newfile = std::string(av[1]) + ".replace";
    std::ofstream outFile(newfile.c_str());
    if (!outFile.is_open()){
        std::cerr << "Error: cannot create file" << std::endl;
        file.close();
        return 1;
    }
    
    std::string str = av[2];
    int len = str.length();
    while (std::getline(file, line)){
        start = 0;
        while ((start = line.find(av[2], start)) != std::string::npos){
            flag = true;
            line.erase(start, len);
            line.insert(start, av[3]);
        }
        outFile << line << std::endl;
    }
    if (!flag)
        std::cout << "No occurence found" << std::endl;
    outFile.close();
    return 0;
}
