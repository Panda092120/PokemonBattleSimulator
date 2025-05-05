// Pokemon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Type.cpp"

class Pokemon
{
    private:
        std::string name;
        int level;
        int hp;
        int attack;
        int defense;
        int spAtk;
        int spDef;
        int speed;
        std::vector<int> types;
    public:
        // The different constructors are for pokemon with 1 vs 2 types
        Pokemon(std::string name, int level, int hp, int attack, int defense, int spAtk, int spDef, int speed, int type)
        {
            // The following formula is pulled from https://bulbapedia.bulbagarden.net/wiki/Stat#HP on the formula for calculating stats
            this->name = name;
            this->level = level;
            this->hp = hp;
            this->attack = ((attack * 2 * level)  / 100) + level + 10;
            this->defense = ((defense * 2 * level)  / 100) + level + 10;
            this->spAtk = ((spAtk * 2 * level)  / 100) + level + 10;
            this->spDef = ((spDef * 2 * level)  / 100) + level + 10;
            this->speed = ((speed * 2 * level)  / 100) + level + 10;
            this->types.push_back(type);
        }
        Pokemon(std::string name, int level, int hp, int attack, int defense, int spAtk, int spDef, int speed, int type1, int type2)
        {
            this->name = name;
            this->level = level;
            this->hp = hp;
            this->attack = ((attack * 2 * level)  / 100) + level + 10;
            this->defense = ((defense * 2 * level)  / 100) + level + 10;
            this->spAtk = ((spAtk * 2 * level)  / 100) + level + 10;
            this->spDef = ((spDef * 2 * level)  / 100) + level + 10;
            this->speed = ((speed * 2 * level)  / 100) + level + 10;
            this->types.push_back(type1);
            this->types.push_back(type2);
        }
        std::string getName()
        {
            return this->name;
        }
        int getLevel()
        {
            return this->level;
        }
        int getHp()
        {
            return this->hp;
        }
        int getAttack()
        {
            return this->attack;
        }
        int getDefense()
        {
            return this->defense;
        }
        int getSpAtk()
        {
            return this->spAtk;
        }
        int getSpeed()
        {
            return this->speed;
        }
        int getHitEffectivness(int attack)
        {
            int total = 1;
            Types chart = Types();
            for(int i : this->types)
            {
                total *= chart.effectivness(i, attack);
            }
            return total;
        }
        void lowerHp(int dmg)
        {
            this->hp -= dmg;
        }



};

int main()
{
    std::cout << "Hello World!\n";
    // The following pokemon are created from useing their Base stats from bulbapedia, all pokemon are set to lvl 50
    Pokemon spiritomb = Pokemon("Spiritomb", 50, 50, 92, 108, 92, 108, 35, 13, 15);
    Pokemon roserade = Pokemon("Roserade", 50, 60, 70, 55, 125, 105, 90, 4, 7);
    Pokemon gastrodon = Pokemon("Gastrodon", 50, 111, 83, 68, 91, 82, 39, 2, 8);
    Pokemon lucario = Pokemon("Lucario", 50, 70, 110, 70, 115, 70, 90, 6, 16);
    Pokemon milotic = Pokemon("Milotic", 50, 95, 60, 79, 100, 125, 81, 2);
    Pokemon garchomp = Pokemon("Garchomp", 50, 108, 130, 95, 80, 85, 102, 14, 8);
    Pokemon accelgor = Pokemon("Accelgor", 50, 80, 70, 40, 100, 60, 145, 10);
    Pokemon bouffalant = Pokemon("Bouffalant", 50, 95, 110, 95, 40, 95, 55, 0);
    Pokemon druddigon = Pokemon("Druddigon", 50, 77, 120, 90, 60, 90, 48, 14);
    Pokemon vanilluxe = Pokemon("Vanilluxe", 50, 71, 95, 85, 110, 95, 79, 5);
    Pokemon escavalier = Pokemon("Escavalier", 50, 70, 135, 105, 60, 105, 20, 10, 16);
    Pokemon volcarona = Pokemon("Volcarona", 50, 85, 60, 65, 135, 105, 100, 10, 1);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
