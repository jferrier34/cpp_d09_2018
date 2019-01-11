//
// EPITECH PROJECT, 2019
// Warrior.hpp
// File description:
// ex02
//

#ifndef _WARRIOR_HPP
#define _WARRIOR_HPP

#include "Character.hpp"
#include <stdio.h>
#include <string.h>
#include <iostream>

class Warrior : public Character {
        private:
                std::string _WeaponName;
        public:
                Warrior(const std::string &Name, int lvl);
                ~Warrior();
                int CloseAttack();
                int RangeAttack();
};

#endif