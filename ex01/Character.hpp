//
// EPITECH PROJECT, 2019
// Character.hpp
// File description:
// ex01
//

#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_ 

#include <stdlib.h>
#include <string.h>
#include <iostream>

class Character {
        private:
                int my_level;
                std::string my_name;

                int my_Strength;
                int my_Stamina;
                int my_Intelligence;
                int my_Spirit;
                int my_Agility;
                int my_Pv;
                int my_Energy;

        public:
                Character(const std::string &name, int level);
                ~Character();

                const std::string &getName() const;
                int getLvl() const;
                int getPv() const;
                int getPower() const;

                int CloseAttack();
                int RangeAttack();
                void TakeDamage(int damage);
                void Heal();
                void RestorePower();

                enum AttackRange {
                CLOSE,
                RANGE
                };
                AttackRange Range;
};

#endif