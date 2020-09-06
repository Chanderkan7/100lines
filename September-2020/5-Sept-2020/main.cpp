/*#include <iostream> // for console io operations
#include <cstdlib> // for rand() funtion
#include <ctime> // for time() function
#include <math.h> // for ceil() function
using namespace std;
class Warrior
{
	private:
		int attkMax;
		int blockMax;
	public:
		string name;
		int health;
		Warrior (string name, int health, int attkMax, int blockMax)
		{
			this -> name = name;
			this -> health = health;
			this -> attkMax = attkMax;
			this -> blockMax = blockMax;
		}
		int Attack()
		{
			return rand() % this -> attkMax;
		}
		int Block()
		{
			return rand() % this -> blockMax;
		}
};
class Battle
{
	public:
	static void StartFight(Warrior& warrior1, Warrior& warrior2)
	{
		while (true)
		{
			if(Battle::GetAttackResult(warrior1, warrior2).compare("Game Over") == 0)
			{
				cout << "Game Over\n";
				break;
			}
			if (Battle::GetAttackResult(warrior2, warrior1).compare("Game Over") == 0)
			{
				cout << "Game Over\n";
				break;
			}
		}
	}
	static string GetAttackResult(Warrior& warriorA, Warrior& warriorB)
	{
		int warriorAAttkAmt = warriorA.Attack();
		int warriorBBlockAmt = warriorB.Block();
		int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);
		damage2WarriorB = (damage2WarriorB <=0) ? 0: damage2WarriorB;
		warriorB.health = warriorB.health - damage2WarriorB;
		printf("%s attacks %s and deals %d damage\n", warriorA.name.c_str(), warriorB.name.c_str(), damage2WarriorB);
		printf("%s is down to %d health\n", warriorB.name.c_str(), warriorB.health);
		if(warriorB.health <=0 )
		{
			printf("%s is defeated and %s is victorious\n", warriorB.name.c_str(), warriorA.name.c_str());
			return "Game Over";
		}
		else
		{
			return "Fight Again";
		}
	}
};
int main(int argc, char** argv)
{
	cout << "5th September 2020\n";
	srand(time(NULL));
	Warrior tom("Hulk", 100, 30, 15);
	Warrior sam("Thor", 135, 25, 10);
	Battle::StartFight(tom, sam);
}*/
#include <iostream>
using namespace std;
int main()
{
	/*int number1;
	cout << "Enter the number: ";
	cin >> number1;
	if(number1%2 == 0)
	{
		cout << "Number is even\n";
	}
	else
	{
		cout << "Number is odd\n";
	}*/
	int i = 0;
	while (true)
	{
		cout << "Hello World\n" << i;
		i++;
		if (i == 10)
		break;
	}
}
