#include <iostream>
#include <string>
#include "Combat.h"

int main ()
{
    srand(static_cast<unsigned int>(time(0)));
    //create a new weapon and get durability from combat.h
    Weapon newWep;
    newWep.setRandomWeaponType();
    newWep.setWeaponName();
    newWep.GetDurability();
    newWep.setDamage();
    newWep.getDamage();
    std::cout << newWep.getWeaponType() << std::endl;
    std::cout << newWep.setWeaponName() << std::endl;
    std::cout << "Damage: " << newWep.getDamage() << std::endl; 
    std::cout << "Durability: " << newWep.GetDurability() << std::endl;

    return 0;
}