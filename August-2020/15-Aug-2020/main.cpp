#include <iostream>
#include <fstream>
using namespace std;
/*int add(int a, int b);
int fact(int n);
int fun1(int x, int y)
{
	cout << "x:" << x << " y:" << y << endl;
	if (x==0)
		return y;
	else 
		return fun1(x-1, x+y);
	
}
void printFibo(int n)
{
	static int n1 = 0, n2 = 1, n3;
	if (n>0)
	{
	n3 = n1 + n2;
	n1 = n2;
	n2 = n3;
	cout << n3 <<" ";
	printFibo(n-1);
	}
}*/
void calFibo(int n)
{
	static int n1=0, n2=1, n3;
	if (n > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		cout << n3 << " ";
		calFibo(n-1);
	}
}
int main()
{
	int fibo;
	cout << "How many terms of Fibonacci to be printed? ";
	cin >> fibo;
	calFibo(fibo);
	/*int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	cout << "Fibonacci Series is: ";
	cout << "0 1 ";
	printFibo(n-2);
	int rval = fun1(2,3);
	cout << "Return value is: " << rval;
	/*int number;
	cout << "How many fibonacci digits do you want? ";
	cin >> number;
	int num1 = 0, num2 = 1;
	int num3;
	cout << num1 << " " << num2;
	for (int i = 2; i < number; i++)
	{
		num3 = num1 + num2;
		cout << " " << num3;
		num1 = num2;
		num2 = num3;
		//num3 = i;
		
	}
	/*int n1= 0 , n2 = 1, n3, number;
	cout << "Enter the number of elements: ";
	cin >> number;
	cout << n1 <<" "<< n2 <<" ";
	for (int i=1; i < number; ++i)
	{
		n3 = n1 + n2;
		cout << n3 <<" ";
		n1 = n2;
		n2 = n3;
	}
	ofstream file1("file1.txt");
	file1 << "This is directly put into fileobject. ";
	string str1;
	cout << "Enter the string for file. ";
	getline(cin, str1);
	file1 << str1;
	file1.close();
	string str1;
	ifstream file1("file1.txt");
	while(getline(file1, str1))
	{
		cout << str1;
	}
	int c = add(5, 2);
	cout << c;*/
//	int c = fact(5);
//	cout << c;
}
/*int fact(int n)
{
	if (n<=1)
	return 1;
	else
	{
		return n * fact(n-1);
	}
}
int add(int a, int b)
{
	int c = a + b;
	return c;
}*/
