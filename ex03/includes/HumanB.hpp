#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
private:
    std::string _nameB;
    Weapon *_weaponB;
public:
    HumanB(std::string name);
    void setWeapon(Weapon club);
    void attack();
    ~HumanB();
};

#endif