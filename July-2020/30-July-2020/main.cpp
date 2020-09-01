#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
/*void transfer(int n, char from, char to, char temp);
#define MAX 100
void input(char line[]);
void proc(char line[], char rev_line[]);
void check(char line[], char rev_line[]);*/
int main()
{
	cout << "Hello World\n";
	cout << "Good night!\n";
	cout << "Sleep well!\n";
	int radius;
	cout << "Enter the radius: ";
	cin >> radius;
	cout <<"Area is: " << 3.14 * radius * radius;
	/*int num1, num2;
	cout <<"Enter number1: ";
	cin >> num1;
	cout <<"Enter number2: ";
	cin >> num2;
	cout << "Addition of " << num1 << " & " << num2 << " is: " << num1+num2 << endl;
	int n;
	cout << "Welcome to the Towers of Honai\n";
	cout << "How many disks?";
	cin >> n;
	transfer(n, 'L', 'R', 'C');
	return 0;
	int mark;
	cout << "Enter your mark: ";
	cin >> mark;
	if (mark > 40)
	cout <<"Congratulations on passing!";
	else
	cout <<"Try again next time!";
	int choice;
	float ctemp, ftemp;
	cout << "1. Celsius to Farenhite" << endl;
	cout << "2. Fahrenheit to Celsius" << endl;
	cout << "3. Choose between 1 & 2: ";
	cin >> choice;
	if (choice ==1)
	{
		cout << "Enter the temperature in Celsius: " << endl;
		cin >> ctemp;
		ftemp = (1.8*ctemp) +32;
		cout <<"Temperature in Farenheit = " << ftemp << endl;
	}
	else
	{
		cout << "Enter the temperature in Farenheit: ";
		cin  >> ftemp;
		ctemp = (ftemp-32)/1.8;
		cout << "Temperature in Celsius " << ctemp << endl;
	}
	system("color f3");
	char line[MAX], rev_line[MAX];
	input(line);
	proc(line, rev_line);
	check(line, rev_line);
	cout << endl << endl;
	system("pause");
	return 0;
	return 0;*/
}
/*void input(char line[])
{
	cout << "Enter the text, to FINISH press ENTER key: ";
	cin.getline(line, MAX);
}
void proc(char line[], char rev_line[])
{
	int n = 0;
	int len = strlen(line);
	for(int i=len-1;i>=0;i--)
	{
		rev_line[n] = line[i];
		n++;
	}
	rev_line[n] = '\0';
}
void check(char line[], char rev_line[])
{
	cout <<"\n Reverse = " << rev_line << endl;
	if(strcmp(line, rev_line) == 0)
	cout << "\nThis line is Palindrome";
	else
	cout << "\nThis string is not Palindrome";
}
void transfer(int n, char from, char to, char temp)
{
	if (n>0)
	{
		transfer(n-1, from, temp, to);
		printf("Move disk %d from %c to %c\n", n, from, to);
		transfer(n-1, temp, to, from);
	}
}*/













