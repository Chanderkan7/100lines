#include<iostream>
using namespace std;
int main()
{
	cout << "Enter a number: ";
	int num1;
	cin >> num1;
	if(num1%2 == 0)
	{
		cout << "Number is even";
	}
	else
	{
		cout << "Number is odd";
	}
	cout << "\nThis completes!";
	return 0;
}
//----------------------------------------
/*#include<iostream>
#include <time.h>
#include <stdlib.h>
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
	cout << "1 : Easy (1-15)\n";
	cout << "2 : Medium (1-30)\n";
	cout << "3 : Difficulty (1-60)\n";
	cout << "Select difficulty level: ";
	cout << "\nor Type any other key to quit.";
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
		cout << "You lose! \n\n";
	}
	cout << "Type a number: ";
	cin >> i;
	if ((i>maxrand) || (i<0))
	{
		cout << "Error: Number not between 0 and " << maxrand;
		GetResults();
	}
	if(i==j)
	{
		cout << "You win!\n";
		Start();
	}
	else if(i>j)
	{
		cout << "\nToo big!";
		life = life =1;
		cout << "\nLives remaining: " << life << endl;
		GetResults();
	}
	else if(i<j)
	{
		cout << "\nToo small";
		life = life -1;
		cout << "Lives remaining: " << life << endl;
		GetResults();
	}
}
int main()
{
	cout << "\nJackpot Game\n";
	cout << "Goal is to guess number depending on level chosen.\n";
	cout << "Jackpot will tell if number is big or small.";	
	Start();
	return 0;
}*/
