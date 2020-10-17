#include<iostream>
using namespace std;
int main()
{
	int num=2;
	switch(num+2)
	{
		case 1:
			cout << "Case 1" << num << endl;
		case 2:
			cout << "Case 2" << num << endl;
		case 3:
			cout << "Case 3" << num << endl;
		default:
			cout << "Default: Value is " << num << endl;
	}
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int num = 5;
	switch(num+2)
	{
		case 1:
			cout << "Case 1: Value is " << num << endl;
		case 2:
			cout << "Case 2: Value is " << num << endl;
		case 3:
			cout << "Case 3: Value is " << num << endl;
		default:
			cout << "Default: Value is: " << num << endl;
	}
	return 0;
}
/*#include<iostream>
#include<cmath>
using namespace std;
int sum(int, int);
int main()
{
	int x, y;
	cout << "Enter the number: ";
	cin >> x;
	cout << "Enter the number: ";
	cin >> y;
	cout << "Sum of these two: " << sum(x,y);
	return 0;
}
int sum(int a, int b)
{
	int c = a+b;
	return c;
}
/*#include<iostream>
using namespace std;
int sum(int a, int b=10, int c=20);
int main()
{
	cout << sum(1) << endl;
	cout << sum(1, 2)<< endl;
	cout << sum(1, 2, 3) << endl;
	return 0;
}
int sum(int a, int b, int c)
{
	int z;
	z = a+b+c;
	return z;
}
/*#include<iostream>
#include<cmath>
using namespace std;
int sum(int, int);
int main()
{
	int x, y;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	cout << "Sum of these two: "<< sum(x,y);
	return 0;
}
int sum(int a, int b)
{
	int c = a+b;
}
/*#include<iostream>
using namespace std;
int sum(int, int);
int main()
{
	cout << sum(1,99);
	return 0;
}
int sum(int num1, int num2)
{
	int num3 = num1 + num2;
	return num3;
}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << pow(2,5);
	return 0;
}*/




