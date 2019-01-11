//
// EPITECH PROJECT, 2019
// Character.cpp
// File description:
// ex01
//

#include "Character.hpp"

//this is constructor and the destructor

Character::Character(const std::string &name, int level)
{
        this->my_name = name;
        this->my_level = level;
        this->my_Pv = 100;
        this->my_Strength = 5;
        this->my_Intelligence = 5;
        this->my_Energy = 100;
        this->my_Spirit = 5;
        this->my_Agility = 5;
        this->my_Stamina = 5;
        this->Range = Character::CLOSE;
        std::cout << my_name << " Created" << std::endl;
}

Character::~Character()
{
}

//this is the simple getter of the code

const std::string &Character::getName() const
{
        return(this->my_name);
}

int Character::getLvl() const
{
        return(this->my_level);
}

int Character::getPower() const
{
        return(this->my_Energy);
}

int Character::getPv() const
{
    return(this->my_Pv);
}



//this is the procedures

int Character::CloseAttack()
{
        if (this->my_Energy >= 10) {
                std::cout << this->my_name << " strikes with a wooden strick" << std::endl;
                return (this->my_Strength = my_Strength + 10);
        } else {
                std::cout << this->my_name << " out of power" << std::endl;
                return (0);
	}
}

int Character::RangeAttack(void)
{
        if (this->my_Energy >= 10) {
                this->my_Energy = my_Energy - 10;
                std::cout << this->my_name << " tosses a stone" << std::endl;
                return (this->my_Strength = my_Strength + 5);
        } else 
                std::cout << this->my_name << " takes a potion" << std::endl;
        return (0);
}



void Character::TakeDamage(int damage)
{
        this->my_Pv = my_Pv - damage;
        if (this->my_Pv <= 0) {
                this->my_Pv = 0;
                std::cout << this->my_name << " out of combat" << std::endl;
        }  if (this->my_Pv > 0) {
                std::cout << this->my_name << " takes " << damage << " damage" << std::endl;
        }
}

void Character::Heal(void)
{
        this->my_Pv = my_Pv + 50;
        if (this->my_Pv > 100) {
                this->my_Pv = 100;
        std::cout << this->my_name << " takes a potion" << std::endl;
        }
}

void Character::RestorePower(void)
{
        this->my_Energy = 100;
        std::cout << this->my_name << " eats" << std::endl;
}

