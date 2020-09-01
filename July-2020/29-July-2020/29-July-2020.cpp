#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void drawBorder();
int main()
{
	drawBorder();
	std::cout << "Your name is " << std::endl;
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl;
	std::cout << "What's your age? " << std::endl;
	int age;
	std::cin >> age;
	std::cout << " What's your gender? (m/f) " << std::endl;
	std::string gender;
	std::cin >> gender;
	if (gender == "m" || gender == "MALE")
	{
		std::cout <<"Hi, gentleman" << std::endl;
	}
	else if(gender == "f" || gender == "FEMALE")
	{
		std::cout <<"Hi, lady";
	}
	else 
	{
		std::cout << "ERROR!" << std::endl;
	}
	std::cout << "Please enter a positive number: " << std::endl;
	int x;
	std::cin >> x;
	std::cout << "Please enter another positive number: " << std::endl;
	int y;
	std::cin >> y;
	int z = x*y;
	std::cout << "What is the name of your magic: " << std::endl;
	std::string magic;
	std::cin >> magic;
	std::cout << "Enter the species of your Wizard (human, elf, orc, dwarf): " << endl;
	int health = 30;
	string species;
	std::cin >> species;
	if (species == "orc")
	health = 50;
	else if(species == "elf")
	health = 20;
	std::cout << "Apperntice " << species << " wizard " << name << " hesitantly approached The Temple for the final test." << std::endl;
	std::cout << "As a " << age << " years-old young ";
	if (gender == "m")
	{
		std::cout << "gentleman";
	}
	else if(gender == "f")
	{
		std::cout << "lady";
	}
	else 
	{
		std::cout << "intersex";
	}
	std::cout << " had studied " << x << " spells for " << y << " hours each roiling for a total of " << z << " hours " << std::endl; 
	std::cout << name << " only hoped that the Master would ask for the apprentice's favourite incantanation, " << std::endl;
	std::cout << "The simmoning of the " << magic << "..." << std::endl;
	int gold = rand()%1001;
	std::cout << "Due to luck you get to start with " << gold << "piece";
	if(gold !=1 && gold !=0 )
	std::cout << "s";
	std::cout << " of gold. Your god Thor must look kindly upon you." << std::endl;	
	cout << "Which direction do you want to travel (N, S, E, W)?" << endl;
	for(;;)
	{
		int attack = rand() % 10 +1;
		string direction;
		std::cin >> direction;
		if (direction == "quit")
		{
			std::cout << "You abruptly ended your adventure and teleported to your homeland." << std::endl;
			break;
		}
		if (health <= 0)
		{
			std::cout <<"You died! " << std::endl;
			break;
		}
		char dir = direction[0];
		switch (dir)
		{
			case 'N':
				std::cout <<"You travel north and you bump into troll." << std::endl;
				break;
			case 'S':
			{
				std::cout <<"While travelling south, you fight a group of " << attack << " goblins" << std::endl;
				health -=10;
				break;
			}
			case 'E':
				std::cout << "You are travelling east, where you bump into troll." << std::endl;
				break;
			case 'W':
			{
				std::cout <<"On your way west you fight a group of " << attack << " goblins." << std::endl;
				health -= 10;
				break;
			}
			default:
			std::cout << "Direction doesn't exist, please re-enter." << std::endl;
			break;			
		}
	}
}
void drawBorder()
{
	std::cout << "=\n Welcome to the test \n\n Please enter following for a personalized story." << std::endl;
}
