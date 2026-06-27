#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
private:
    std::string _nameA;
    Weapon &_weaponA;
public:
    HumanA(std::string name, Weapon &weapon);
    void attack();
    ~HumanA();
};

#endif