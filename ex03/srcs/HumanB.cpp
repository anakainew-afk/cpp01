#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _nameB(name) {}

HumanB::~HumanB() {}

void HumanB::attack(){
    std::cout << _nameB << " attacks with their " << _weaponB << std::endl;
}

void HumanB::setWeapon(Weapon club){
    _weaponB = &club;
}