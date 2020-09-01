#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the number: ";
	int number;
	cin >> number;
	if(number%2 == 0)
	cout << "Number is even";
	else
	cout << "Number is odd!";
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "Factors of ";
	cin >> number;
	for (int i =1; i <= number; i++)
	{
		if((i%1 == 0) && (i%number==0))
		{
			cout << i << " ";
		}
	}
}
/*#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
	int num1;
	int num2;
	char choice;
	start:
		cout << setw(45) << "Plz select options you need: "<< endl;
		cout << "Press A to find Sum: " << endl;
		cout << "Press S to find Subtraction: "<< endl;
		cout << "Press M to find Multiplication: "<< endl;
		cout << "Press D to find Division: "<< endl;
		cout << "Press F to find Factorial: "<< endl;
		cout << "Press R to Restart the Program: "<< endl;
		cout << "Press Y to End the Program: "<< endl;
		cout << "\nDeveloped by: "<< setw(25) << "Zubair Saif"<< endl;
		system ("color 5f");
		cin >> choice;
		system("cls");
		switch(choice)
		{
			case 'y':
				return 0;
			case 'a':
				cout << "Enter the First Number: ";
				cin >> num1;
				cout << "Enter the Second Number: ";
				cin >> num2;
				cout << "The SUM is: " << num1+num2;
				cout << endl;
				goto start;
			case 'd':
				cout << "Enter the First Number: ";
				cin >> num1;
				cout << "Enter the Second Number: ";
				cin >> num2;
				cout << num1 << " divided by"  << num2 << " is: " << num1/num2;
				goto start;
				break;
			case 'r':
				goto start;
				break;
			case 'f':
				int g;
				cout << "Enter the factorial: ";
				cin >> g;
				cout << "\n";
				int fact = 1;	
				for(int i = 1; i <=g; i++)
				{
					fact = fact * i;
				}
				cout << "Factorial is: " << fact;
				cout << "\nDesigned by " << setw(25) << "Zubair Saif" << endl;
				goto start;
				break;
				system("cls");
		}
}
/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n, num = 0, pass = 1234;
	cout << "Enter the 4 digit password: ";
	for (int i=1; i <=4; i++ )
	{
		num = num*10+(getch()-48);
		cout << "*";
	}
	cout << "\n" << num;
}*/
