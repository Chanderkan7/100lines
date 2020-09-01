#include <iostream>
using namespace std;
int main()
{
	cout << "Hi!";
}
/*#include <iostream>
using namespace std;
int main()
{
	
	/*int salary, newsalary;
	cout << "Enter your current Salary: ";
	cin >> salary;
	cout << "\nYour projections are as below \n";
	for(int i =5; i <= 100; i=i+5)
	cout << salary << " + " << i << "% = " << (salary+(salary*i/100)) << endl;*/
//}
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
	cout << "Enter Difficulty Level: \n";
	cout << "1: Easy (0-15)\n";
	cout << "2: Medium (0-30)\n";
	cout << "3: Difficulty (0-50)\n";
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
	if(life <= 0)
	{
		cout << "You lose!\n";
		Start();
	}
	cout << "Type a number: ";
	cin >> i;
	if((i>maxrand) || (i<0))
	{
		cout << "Error: Number not between 0 and " << maxrand;
		GetResults();
	}
	if( i ==j)
	{
		cout << "You Win\n\n";
		Start();		
	}
	else if(i>j)
	{
		cout << "Too Big\n";
		life = life -1;
		cout << "Lives remaining: " << life << "\n\n";
		GetResults();
	}
	else 
	{
		cout << "Too Small\n";
		life = life -1;
		cout << "Lives Remaining: " << life << "\n\n";
		GetResults();
	}
}
int main()
{
	cout << "* Jackpot Game *\n";
	cout << "The goal is to guess a number.\n";
	cout << "Jackpot will tell you if number is big or small\n";
	cout << "Small compared to secret number to find.\n\n";
	Start();
	return 0;
}*/
