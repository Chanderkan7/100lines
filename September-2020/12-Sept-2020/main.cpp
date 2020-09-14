#include<iostream>
using namespace std;
int main()
{
	cout << "Hello World!";
	cout << "Hello World!";
	cout << "Hello World!";
	int num3;
	cout << "Enter the number: ";
	cin >> num3;
	if(num3%2==0)
	{
		cout << "Even Number!";
	}
	else
	{
		cout << "Odd number!";
	}
	cout << endl;
	for (int i=0; i<num3; i++)
	{
		cout << i << endl;
	}
}
/*#include<iostream>
using namespace std;
int main()
{
	cout << "Enter your number: ";
	int num3;
	cin >> num3;
	if(num3%2 == 0)
	{
		cout << "Number is even!";
		cout << endl;
	}
	else
	{
		cout << "Number is odd!";
		cout << endl;
	}
}
#include<iostream>
using namespace std;
int main()
{
	cout << "Hello Wonderful";
	int num2;
	cout <<  "Enter your number: ";
	cin >> num2;
	if(num2 %2 == 0)
	{
		cout << "Number is even!";
		cout << endl;
	}
	else 
	{
		cout << "Number is odd!";
		cout << endl;
	}
return 0;	
}*/
/*#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
	ofstream file1("file1.txt");
	//file1.open();
	string str = "Hello I am string!";
	file1 << str;
	file1.close();
	int num1;
	cout << "Enter the  number: ";
	cin >> num1;
	if (num1%2 == 0)
	{
		cout << "Number is even!";
	}
	else 
	{
		cout << "Number is odd!";
	}
	cout << endl;
	int num2;
	for (int i = 0; i < num2; i++)
	{
		cout << i << " ";	
	}
	int num3 = 30;
	do
	{
		cout << num3 << " ";
		num3--;
		getch();
	}
	while (num3<0);
	return 0;
}*/
