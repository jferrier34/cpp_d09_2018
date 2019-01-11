//
// EPITECH PROJECT, 2019
// Character.hpp
// File description:
// ex02
//

#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_ 

#include <stdlib.h>
#include <string.h>
#include <iostream>

class Character {
protected:
                int level;
                std::string name;

                int Strength;
                int Stamina;
                int Intelligence;
                int Spirit;
                int Agility;
                int Pv;
                int Energy;

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
                RANGE,
                };
                AttackRange Range;
};

#endif