#include<iostream>
using namespace std;
class A
{
	public:
		void disp()
		{
			cout << "Super class function " << endl;
		}
};
class B: public A
{
	public:
		void disp()
		{
			cout << "Sub class function " << endl;
		}
};
int main()
{
	A obj;
	obj.disp();
	B obj2;
	obj2.disp();
	return 0;
}
/*#include<iostream>
#include<cmath>
using namespace std;
int sum(int, int);
int main()
{
	int x,y;
	cout << "Enter first number ";
	cin >> x;
	cout << "Enter second number ";
	cin >> y;
	cout << "Sum of these two "<< sum(x, y);
	return 0;
}
int sum(int a, int b)
{
	int c = a+b;
	return c;
}
/*#include<iostream>
using namespace std;
int fa(int);
int fb(int);
int fa(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fb(n-1);
	}
}
int fb(int n)
{
	if(n<=1)
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
	int num=5;
	cout << fa(num);
	return 0;
}
/*#include<iostream>
#include<cmath>
using namespace std;
void square(int arr[2][3])
{
	int temp;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			temp = arr[i][j];
			cout << pow(temp, 2) << endl;
		}
	}
};
int main()
{
	int arr[2][3] = 
	{
		{1, 2, 3},
		{4, 5, 6}
	};
	square(arr);
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << "You entered: ";
	cout << str << endl;
	str.push_back('A');
	cout << "The string after push_back " << str << endl;
	//str.pop_back();
	cout << "The string after pop_back " << str << endl;
	return 0;
}*/
