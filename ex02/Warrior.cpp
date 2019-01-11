//
// EPITECH PROJECT, 2019
// Warrior.hpp
// File description:
// ex02
//

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int lvl) : Character(name, lvl)
{
        this->level = 42;
        this->Strength = 12;
        this->Stamina = 12;
        this->Intelligence = 6;
        this->Spirit = 5;
        this->Agility = 7;
        std::cout << "I'm " << this->name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack()
{
        if (this->Energy >= 30) {
                std::cout << this->name << " strikes with his " << _WeaponName << std::endl;
                this->Energy = Energy - 30;
        return (this->Strength + 20);
        }
        else
        std::cout << this->name << "out of power" << std::endl;
        return (0);
}

int Warrior::RangeAttack()
{
        if (this->Energy >= 10) {
                std::cout << this->name << "intercepts" << std::endl;
                return (this->Energy = Energy - 10);
        }
        else {
                std::cout << this->name << " out of power" << std::endl;
                return (0);
        }
}
