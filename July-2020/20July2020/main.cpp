#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <ctime>
#include <numeric>
#include <math.h>
class Warrior{
	private:
		int attkMax;
		int blockMax;
	public:
		std::string name;
		int health;
		Warrior(std::string, int health, int attkMax,int blockMax){
			this -> name = name;
			this -> health = health;
			this -> attkMax = attkMax;
			this -> blockMax = blockMax;
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
		static void StartFight(Warrior& warrior1, Warrior& warrior2){
			while (true){
	if (Battle::GetAttackResult(warrior1, warrior2).compare("Game Over") == 0 ){
				std::cout << "Game Over\n";
				break;
				}
				if (Battle::GetAttackResult(warrior2, warrior2).compare("Game Over") == 0){
				std::cout <<"Game Over\n";
				break;	
				}
		}
	}
		static std::string GetAttackResult(Warrior& warriorA,
		Warrior& warriorB){
			int warriorAAttkAmt = warriorA.Attack();
			int warriorBBlockAmt = warriorB.Block();
			int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);
			damage2WarriorB = (damage2WarriorB <= 0) ? 0 :
				damage2WarriorB;
			warriorB.health = warriorB.health - damage2WarriorB;
			printf("%s attacks %s and deals %d damage\n",
			warriorA.name.c_str(),
			warriorB.name.c_str(),
			damage2WarriorB);
			printf("%s is down to %d health\n", 
			warriorB.name.c_str(),warriorB.health);
			if (warriorB.health <= 0){
				printf("%s has Deid and %s is Victorious\n",
				warriorB.name.c_str(),
				warriorA.name.c_str());
				return "Game Over";
			} else{
				return "Fight Again";
			}
		}
};
int main(int argc, char** argv) {
	std::cout << "***** 20July2020 ***********\n";
	srand(time(NULL));
	Warrior thor("Thor", 100, 30, 15);
	Warrior hulk("Hulk", 135, 25, 10);
	Battle::StartFight(thor, hulk);
	std::cout<<"Hi \n";
	std::cout<<"I am Chanderkant \n";
	std::cout<<"Today I was dealing with Inheritence.\n";
	std::cout<<"I was not able to get the full result.\n";
	std::cout<<"I have to slowly work towards it....\n";
	std::cout<<"Full credit to Derek Banas to the effort!\n";
	std::cout<<"He teaches perfectly!\n";
	std::cout<<"Infact he is able to give out perfect output in first shot!\n";
	std::cout<<"I wish I was able to do the same!\n";
	std::cout<<"Slow and steady I have to work towards a good coding.\n";
	std::cout<<"Eventually I will get there....\n";
	std::cout<<"Line 83\n";
	std::cout<<"Line 84\n";
	std::cout<<"Line 85\n";
	std::cout<<"Line 86\n";
	std::cout<<"Line 87\n";
	std::cout<<"Line 88\n";
	std::cout<<"Line 89\n";
	std::cout<<"Line 90\n";
	std::cout<<"Line 91!\n";
	std::cout<<"Line 92\n";
	std::cout<<"Line 93\n";
	std::cout<<"Line 94\n";
	std::cout<<"Line 95\n";
	std::cout<<"Line 96\n";
	std::cout<<"Line 97\n";
	std::cout<<"Line 98\n";
	std::cout<<"Line 99\n";
	std::cout<<"Line 100\n";
}
