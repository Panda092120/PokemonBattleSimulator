#include <iostream>
#include <string>

class Types 
{
	private:
		std::string type1;
		std::string type2;

	public:
		Types(std::string one, std::string two)
		{
			type1 = one;
			type2 = two;
		}
		std::string getType1()
		{
			return type1;
		}
		std::string getType2()
		{
			return type2;
		}
		int checkEffectiveness(std::string attackType, std::string myType)
		{
			switch (attackType) 
			{
			case "Normal"
				if (myType == "Rock" || myType == "Steel") // Resistant
				{
					return 0.5;
				}
				else if (myType == "Ghost") // Immunity
				{
					return 0;
				}
				else { // Neutral
					return 1;
				}
				break;
			case "Fire"
				
				if (myType == "Grass" || myType == "Ice" || myType == "Bug" || myType == "Steel") // Super-Effective
				{
					return 2;
				}
				else if (myType == "Fire" || myType == "Water" || myType == "Rock" || myType == "Dragon") // Not very effective
				{
					return 0.5;
				}
				else { // Neutral
					return 1;
				}
				break;
			case "Water"

				break;
			case "Electric"

				break;
			case "Grass"

				break;
			case "Ice"

				break;
			case "Fighting"

				break;
			case "Poison"

				break;
			case "Ground"

				break;
			case "Fly"

				break;
			case "Psychic"

				break;
			case "Bug"

				break;
			case "Rock"

				break;
			case "Ghost"

				break;
			case "Dragon"

				break;
			case "Dark"

				break;
			case "Steel"

				break;
			case "Fairy"

				break;






			}
		}


};