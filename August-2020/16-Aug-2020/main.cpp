#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
 int num1;
 cout << "Enter the number: ";
 cin >> num1;
 if(num1%2 == 0)
 {
 	cout << "Number is even!";
 }
 else
 {
 	cout << "Number is odd!";
 }
}
	/*int n, count=0;
	cout << "Enter the stars you want to print: ";
	cin >> n;
	for (int i=0; i <= n ; i++)
	{
			for (int j = 0; j <= i ; j++)
			{
				cout << j;
			}
				cout << endl;
	}
	cout << "--------\n";
		for (int i=0; i <= n ; i++)
	{
			//cout << n << " ";
			for (int j = n; j >= i ; j--)
			{
				cout << j;
			}
				cout << endl;
	}
}
/*
int main()
{
	int n, count=0;
	cout << "Enter the stars you want to print: ";
	cin >> n;
	
	for (int i=0; i < n ; i++)
	{
			//cout << n << " ";
			for (int j = n; j > i ; j--)
			{
				cout << j;
			}
				cout << endl;
	}
	/*ofstream file1("file1.txt");
	file1 << "This is entered into the file.\n";
	string str1;
	cout << "Enter the line you want to insert: ";
	getline(cin, str1);
	file1 << str1;
	file1.close();
	ifstream file2("file1.txt");
	string str2;
	getline(file2, str2);
	cout << str2;
	file2.close();
}
/*void Fibo(int n);
int main()
{
	int n;
	cout << "Enter the fibonacci numbers to be printed: ";
	cin >> n;
	cout << "0 1 "; 
	Fibo(n);
}
void Fibo(int n)
{
	static int n1=0, n2=1, n3;
	if (n>0)
	{
	n3 = n1 + n2;
	n1 = n2;
	n2 = n3;	
	cout << n3 << " ";
	Fibo(n-1);
	getche();
	}
		
}
{
	int num1 = 0, num2 = 1, num3, num;
	cout << "Numbers of Fibonacci to print: ";
	cin >> num;
	cout << num1 << " "<< num2 << " ";
	for (int i = 2; i < num; i++ )
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		cout << num3 << " ";
	}
}*/
