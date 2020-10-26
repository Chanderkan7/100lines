#include<iostream>
using namespace std;
int sum(int a, int b=10, int c=20);
int main()
{
	cout << sum(1) << endl;
	cout << sum(1, 2) << endl;
	cout << sum(1, 2, 3) << endl;
	return 0;
}
int sum(int a, int b, int c)
{
	int z;
	z = a + b + c;
	return z;
}
/*#include<iostream>
using namespace std;
int fa(int);
int fb(int);
int fa(int n)
{
	if(n <= 1)
	return 1;
	else 
	{
		return n*fb(n-1);
	}
}
int fb(int n)
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return n*fa(n-1);
	}
}
int main()
{
	int num = 5;
	cout << fa(num);
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if(num%2 == 0)
	{
		goto print;
	}
	else 
	{
		cout << "Odd number: ";
	}
	print:
		cout << "Even number.";
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int num = 2;
	switch(num+2)
	{
		case 1:
			cout << "Case 1: Value is: " << num << endl;
		case 2:
			cout << "Case 2: Value is: " << num << endl;
		case 3:
			cout << "Case 3: Value is: " << num << endl;
		default:
			cout << "Default: Value is: " << num << endl;
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
		cout << "Case 1: Value is: " << num << endl;
	case 2:
		cout << "Case 2: Value is: " << num << endl;
	case 3:
		cout << "Case 3: Value is: " << num << endl;
	default:
		cout << "Default: Value is: " << num << endl;		
	}
	return 0;
}*/
