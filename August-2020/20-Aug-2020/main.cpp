#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
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
	cout << "\nSelect difficulty mode: \n";
	cout << "1: Easy (1-15)\n";
	cout << "2: Medium (0-30)\n";
	cout << "3: Difficulty (0-50)\n";
	cout << "or type any other key to quit\n";
	c = 30;
	cin >> c;
	cout << endl;
	switch(c)
	{
		case '1':
			maxrand = 15;
			break;
		case '2':
			maxrand  = 30;
			break;
		case '3':
			maxrand = 50;
			break;
		default:
			exit(0);
			break; 
	}
	life  = 5;
	srand((unsigned)time(NULL));
	j  = rand() % maxrand;
	GetResults();
}
void GetResults()
{
	if (life <= 0)
	{
		cout << "You lose!\n\n";
		Start();
	}
	cout << "Type a number: ";
	cin >> i;
	if ((i>maxrand) || (i < 0))
	{
		cout << "Error: Number not between 0 and " << maxrand;
		GetResults();
	}
	if (i == j)
	{
		cout << "YOU WIN!";
		Start();
	}
	else if (i > j)
	{
		cout << "Too big!\n";
		life = life -1;
		cout << "Lives remaining: " << life << endl;
		GetResults();
	}
	else if(i < j)
	{
		cout << "Too small!\n";
		life  = life - 1;
		cout << "Lives remaining: " << life << "\n\n";
		GetResults();
	}
}
int main()
{
	/*cout << "\n\n ***** Jackpot Game ******* \n\n";
	cout << "The goal of this fame is to guess number\n";
	cout << "Jackpot will tell you if number is big or small\n";
	Start();
	return 0;*/
	ofstream file1("file1.txt");
	file1 << "This is pushed into file1.";
	file1.close();
	string str1;
	ifstream file2("file1.txt");
	getline(file2, str1);
	cout << str1;
	file2.close();
	int check;
	cout << "Enter the number to check: ";
	cin >> check;
	if ( check % 2 == 0)
	cout << "Number is even!";
	else
	cout << "Number is odd\n";
}













