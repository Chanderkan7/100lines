#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;
	if(n%2 == 0)
	{
		cout << "Number is Even";
	}
	else
	{
		cout << "Number is odd!";
	}
	cout << "\nEnter second number: ";
	int n2;
	cin >> n2;
	cout << "Addition is: " << n + n2;
	int sub = n - n2;
	cout << "\nSubtraction is: " << sub;
	if(sub % 2 == 0)
	{
		cout << "Result is even";
	}
	else
	{
		cout << "Result is odd";
	}
	return 0;
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
	i = 0;
	j = 0;
	life = 0;
	maxrand = 6;
	cout << "Select difficulty mode: ";
	cout << "1 : Easy (0-15)\n";
	cout << "2 : Medium (0-30)\n";
	cout << "3 : Difficult (0-50)\n";
	cout << "or type another key to quit\n";
	c = 30;
	cin >> c;
	cout << "\n";
	switch (c)
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
		cout << "You lose\n";
		Start();
	}
	cout << "Type a number: \n";
	cin >> i;
	if((i>maxrand) || (i<10))
	{
		cout << "Error: number is not between 0 " << maxrand;
		GetResults();
	}
	if(i == j)
	{
		cout << "You Win!\n";
		life = life - 1;
		cout << "Lives Remaining: " << life << "\n\n";
		GetResults();
	}
}
int main()
{
	cout << "* Jackpot Game *\n";
	cout << "The Goal is  to guess a number. \n";
	cout << "Jackpot will tell you if the number is big or small\n";
	cout << "Small compared to the secret number.\n";
	Start();
	return 0;
}*/
