//setting up a class for weapons
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

class Weapon {
    public:
    string weaponType;
    string weaponName;
    int damage;
    int durability;
    int wepType;
    int range;
    int dagger;
    int sword;
    int greatsword;
    int spear;
    int bow;
    int crossbow;
    int staff;

    string getRandomAdj() {
        //randomly generating an adjective
        ifstream adjFile;
        adjFile.open("adj.txt");
        string adj;
        int adjNum = rand() % 100 + 1;
        for (int i = 0; i < adjNum; i++) {
            adjFile >> adj;
        }
        return adj;
    }

    string getRandomNoun() {
        //randomly generating a noun
        ifstream nounFile;
        nounFile.open("noun.txt");
        string noun;
        int nounNum = rand() % 100 + 1;
        for (int i = 0; i < nounNum; i++) {
            nounFile >> noun;
        }
        return noun;
    }

    string setWeaponName() {
        //giving unique names to weapons
        //name will be adjective, weapon type, noun
        string adj = getRandomAdj();
        string noun = getRandomNoun();

        //setting the name
        weaponName = adj + " " + weaponType + " Of the" + " " + noun;
        return weaponName;
    }


    void setWeaponType(const string& type) {
        weaponType = type;
    }

    int setRandomWeaponType() {
        //randomly generating a weapon type
        wepType = rand() % 6 + 1;
        if (wepType == 1) {
            weaponType = "Dagger";
            damage = 5;
            range = 1;
        }
        else if (wepType == 2) {
            weaponType = "Sword";
            damage = 10;
            range = 1;
        }
        else if (wepType == 3) {
            weaponType = "Greatsword";
            damage = 15;
            range = 1;
        }
        else if (wepType == 4) {
            weaponType = "Spear";
            damage = 10;
            range = 2;
        }
        else if (wepType == 5) {
            weaponType = "Bow";
            damage = 10;
            range = 3;
        }
        else if (wepType == 6) {
            weaponType = "Crossbow";
            damage = 15;
            range = 3;
        }
        else if (wepType == 7) {
            weaponType = "Staff";
            damage = 10;
            range = 3;
        }
        return wepType;
    }

    string getWeaponType() {
        return weaponType;
    }

    int setDamage() {
        //setting damage based on weapon type
        if (weaponType == "Dagger") {
            damage = 5;
        }
        else if (weaponType == "Sword") {
            damage = 10;
        }
        else if (weaponType == "Greatsword") {
            damage = 15;
        }
        else if (weaponType == "Spear") {
            damage = 10;
        }
        else if (weaponType == "Bow") {
            damage = 10;
        }
        else if (weaponType == "Crossbow") {
            damage = 15;
        }
        else if (weaponType == "Staff") {
            damage = 10;
        }
        return damage;
    }

    int getDamage() { 
        return damage; 
    }

    int GetDurability() {
        //creating durability ratings on weapons on creation
        durability = rand() % 100 + 1;
        return durability;
    }
};