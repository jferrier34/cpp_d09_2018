//
// EPITECH PROJECT, 2019
// Character.cpp
// File description:
// ex02
//

#include "Character.hpp"
#include "Warrior.hpp"

//this is constructor and the destructor

Character::Character(const std::string &my_name, int my_level)
{
        this->name = my_name;
        this->level = my_level;
        this->Pv = 100;
        this->Strength = 100;
        this->Intelligence = 5;
        this->Energy = 100;
        this->Spirit = 5;
        this->Agility = 5;
        std::cout << this->name << " Created" << std::endl;
}

Character::~Character()
{
}

//this is the simple getter of the code

const std::string &Character::getName() const
{
        return(this->name);
}

int Character::getLvl() const
{
        return(this->level);
}

int Character::getPower() const
{
        return(this->Energy);
}




//this is the procedures

int Character::CloseAttack(void)
{
        if (this->Energy < 10)
                std::cout << this->name << "out of power" << std::endl;
                else if (this->Energy > 10) {
                        this->Energy = Energy - 10;
                        std::cout << this->name << " strikes with a wooden stick" << std::endl;
                }
        return (this->Strength);
}

int Character::RangeAttack(void)
{
        if (this->Energy < 10)
              std::cout << this->name << " out of power" << std::endl;
              else if (this->Energy > 10) {
                              this->Energy = Energy + 5;
                              std::cout << this->name << " tosses a stone" << std::endl;
                      }
        return (this->Strength);
}



void Character::TakeDamage(int damage)
{
        this->Pv = Pv - damage;
        if (this->Pv <= 0) {
                this->Energy = 0;
                std::cout << this->name << " out of combat" << std::endl;
        } else 
                std::cout << this->name << " takes " << damage << " damage" << std::endl;
}

void Character::Heal(void)
{
        this->Pv = Pv + 50;
        if (this->Pv > 100) {
                this->Pv = 100;
        }
        std::cout << this->name << " takes a potion" << std::endl;
}

void Character::RestorePower(void)
{
        this->Energy = 100;
        std::cout << this->name << " eats" << std::endl;
}

