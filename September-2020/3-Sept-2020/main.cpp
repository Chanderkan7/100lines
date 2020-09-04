#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	cout << "Hello World";
	ifstream file1("file1.txt");
	string str1
	while(getline(file1,str1))
	cout << str1;
	file1.close();
	/*ofstream file1("file1.txt");
	string str1 = "This is line 1\n";
	string str2;
	file1 << str1;
	cout << "Enter the second string for file: ";
	getline(cin, str2);
	file1<<str2;
	file1.close();*/
	return 0;	
}
// This code is to Guess number, user can decide the difficulty.
/*#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void Start();
void GetResults();
int i, j, life, maxrand;
char c;
void Start()
{
	i = 0;
	j = 0;
	life = 0;
	maxrand = 6;
	cout << "Select difficulty mode: \n";
	cout << "1 : Easy (0-15)\n";
	cout << "2 : Medium (0-30)\n";
	cout << "3 : Difficulty (0-50)\n";
	cout << "or type another key to quit \n";
	c = 30;
	cin >> c;
	cout << "\n";
	switch(c)
	{
		case '1':
			maxrand = 15;
			break;
		case '2':
			maxrand = 30;
			break;
		case '3':
			maxrand = 60;
			break;
		default:
			exit(0);
			break;
	}
	life = 5;
	srand((unsigned)time(NULL));
	j = rand() % maxrand;
	GetResults();
}
void GetResults()
{
	if (life <= 0)
	{
		cout << "You lose!\n";
		Start();
	}
	cout << "Type a number: ";
	cin >> i;
	if((i>maxrand) || (i<0))
	{
		cout << "Error not between 0 and " << maxrand;
	}
	if (i == j)
	{
		cout << "You Win!\n";
		Start();
	}
	else if(i>j)
	{
		cout << "Too Big\n";
		life = life -1;
		cout << "Lives remaining: "<< life << "\n";
		GetResults();
	}
	else if(i<j)
	{
		cout << "Too small!\n";
		life = life -1;
		cout << "Lives remaining: " << life << "\n\n";
		GetResults(); 
		
	}
}
int main()
{
	cout << "Jackpot Game\n";
	cout << "Goal of this game is to guess the number\n";
	cout << "Game will tell you if the number is big or small\n";
	Start();
	return 0;
}*/
