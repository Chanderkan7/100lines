#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter the number: ";
	cin >> number;
	for(int i = 0; i < number; i++)
	{
		for (int j = number; j > i; j--)
		{
			cout << "*";	
		}
			cout <<"\n";
	}
}
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
	i= 0;
	j = 0;
	life = 0;
	maxrand = 6;
	cout << "Select difficult mode: \n";
	cout << "1 : Easy (1-15)\n";
	cout << "2 : Medium (0-30)\n";
	cout << "3 : Difficult (0-50)\n";
	cout << "or type another key to quit\n";
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
			maxrand = 50;
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
	if(life <=0 )
	{
		cout << "You lose! \n\n";
		Start();
	}
	cout << "Type a number: ";
	cin >> i;
	if((i>maxrand) || (i<0))
	{
		cout << "Error: Number not between 0 and " << maxrand;
		GetResults();
	}
	if(i==j)
	{
		cout << "You Win!\n\n";
		Start();
	}
	else if(i>j)
	{
		cout << "Too Big\n";
		life = life - 1;
		cout << "Lives remaining: " << life << "\n\n";
		GetResults();
	}
	else if(i<j)
	{
		cout << "Too Small\n";
		life = life -1;
		cout << "Lives remaining: " << life << "\n\n";
		GetResults();
	}
}
int main()
{
	cout << "* Jackpot Game *\n";
	cout << "The Goal of this game is to guess a number";
	cout << "Jackpot will tell you if the number is too big\n";
	cout << "Small compared to the secret number to find.\n";
	Start();
	return 0;
}*/
