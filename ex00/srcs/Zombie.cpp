#include "includes/Zombie.hpp"

Zombie::Zombie(std::string name) : _name("") {}

void    Zombie::annonce(){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}