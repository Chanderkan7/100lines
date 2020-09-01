#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>
#include <sstream>
/*class Warrior{
	private:
		int attkMax;
		int blockMax;
	public:
		std::string name;
		int health;
		Warrior(std::string name, int health, int attkMax, int blockMax){
			this->name = name;
			this->health = health;
			this->attkMax = attkMax;
			this->blockMax = blockMax;
		}
		int Attack(){
			return std::rand() % this->attkMax;
		}
		int Block(){
			return std::rand() % this->blockMax;	
		}
		
};
class Battle{
	public:
		static void StartFight(Warrior& warrior1,
		Warrior& warrior2){
			while (true){
				if(Battle::GetAttackResult(warrior1, warrior2).compare("Game Over") == 0){
					std::cout << "Game Over";
					break;
				}
				if(Battle::GetAttackResult(warrior2, warrior1).compare("Game Over") == 0){
					std::cout << "Game Over";
					break;
				}
			}
			
		}
	static std::string GetAttackResult(Warrior& warriorA, Warrior& warriorB){
		int warriorAAttkAmt = warriorA.Attack();
		int warriorBBlockAmt = warriorB.Block();
		int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);
		damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
		warriorB.health = warriorB.health - damage2WarriorB;
		printf("%s attacks %s and deals %d damage\n", warriorA.name.c_str(), warriorB.name.c_str(), damage2WarriorB);
		printf("%s is down to %d health\n", warriorB.name.c_str(), warriorB.health);
		if (warriorB.health <= 0){
			printf("%s has Died and %s is Victorious\n", warriorB.name.c_str(), warriorA.name.c_str());
			return "Game Over";
		}
		else {
			return "Fight Again";
		}
	}
};*/
class Box{
	public:
		double length, width, breadth;
		std::string boxString;
		Box(){
			length = 1, width = 1; breadth = 0;
		}
		Box(double l, double w, double b){
			length = l, width = w, breadth = b;
		}
		Box& operator ++ (){
			length++;
			width++;
			breadth++;
			return *this;
		}
		operator const char*(){
			std::ostringstream boxStream;
			boxStream << "Box: " << length << " , "<< 
			breadth <<" , " << width << " , " << breadth;
			boxString = boxStream.str();
			return boxString.c_str();
		}
		Box operator + (const Box& box2){
			Box boxSum;
			boxSum.length = length + box2.length;
			boxSum.width = width + box2.width;
			boxSum.breadth = breadth + box2.breadth;
		}
		double operator [](int x){
			if (x == 0){
				return length;
			} else if(x == 1) {
				return width;
			} else if (x == 2){
				return breadth;
			} else {
				return 0;
			}
		}
		bool operator == (const Box& box2){
			return ((length == box2.length) && 
			(width == box2.width) &&
			(breadth == box2.breadth));
			
		}
		bool operator < (const Box& box2){
			double thisSize = length + width + breadth;
			double box2Size = box2.length + box2.width + box2.breadth;
			 if (thisSize < box2Size){
			 	return true;
			 }
			 else {
			 	return false;
			 }
		}
		void operator = (const Box& boxToCopy){
			length = boxToCopy.length;
			width = boxToCopy.width;
			breadth = boxToCopy.breadth;
		}
};
int main() {
	std::cout << "*********** 24 July 2020 **********\n";
	Box box(10, 10, 10);
	++box;
	std::cout<<box<<"\n";
/*	srand(time(NULL));
	Warrior thor("Thor", 100, 30, 15);
	Warrior hulk("Hulk", 135, 25, 10);
	Battle::StartFight(hulk, thor);*/
	
}
