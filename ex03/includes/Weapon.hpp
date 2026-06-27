#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "iostream"
#include "string"
#include "new"

class Weapon{
private:
    std::string _type;
public:
    Weapon(std::string str);
    void setType(std::string value);
    const std::string getType();
    ~Weapon();
};

#endif