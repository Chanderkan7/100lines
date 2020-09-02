#include <iostream>
using namespace std;
int main()
{
	cout << "Hello World!\n";
	for (int i=0; i<10; i++)
	{
		cout << i << endl;
	}
	int j = 0;
	do
	{
		cout << "\nHello..." << j;
		j++;
	}
	while(j < 10);
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
	cout << "Select difficulty mode: \n";
	cout << "1 : Easy (0-15)\n";
	cout << "2 : Medium (0-30)\n";
	cout << "3 : Hard (0-50)\n";
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
	if (life <= 0 )
	{
		cout << "You lose\n\n";
		Start();
	}
	cout << "Type a number: ";
	cin >> i;
	if((i>maxrand) || (i<0))
	{
		cout << "Error: Number not between 0 and " << maxrand;
		GetResults();
	}
	if( i == j)
	{
		cout << "You Win!\n\n";
		Start();
	}
	else if(i>j)
	{
		cout << "Too big!";
		life = life -1;
		cout << "Lives Remaining: " << life << "\n\n";
		GetResults();
	}
	else if(i<j)
	{
		cout << "Too Small\n";
		life = life -1;
		cout << "Lives Remaining: " << life << "\n\n";
		GetResults();
	}
}
int main()
{
	cout << "\n\nJackpot Game\n";
	cout << "\nThe goal of this game is to guess a number\n";
	cout << "\nJackpot will tell you if number is too big or small\n";
	cout << "Small comapred to the secrent number to find.\n";
	Start();
	return 0;
}*/
