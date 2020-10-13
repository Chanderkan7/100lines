/*#include<iostream>
using namespace std;
int main()
{
	int var;
	for (var = 200; var>=10; var--)
	{
		cout << "Var " << var << endl;
		if(var == 197)
		{
			break;
		}
	}
	cout << "Hey I'm out!";
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int num=2;
	switch(num)
	{
		case 1: 
			cout << "Case 1" << endl;
			break;
		case 2: 
			cout << "Case 2" << endl;
			break;
		case 3:
			cout << "Case 4" << endl;
			break;
		default: 
			cout << "Default" << endl;				
	}
	cout << "Hey I'm out!";
}
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a num: ";
	cin >> num;
	if (num%2 == 0)
	{
		goto print;
	}
	else
	{
		cout << "Odd number";
	}
	print:
		cout << "Even Number";
	return 0;
}
#include<iostream>
using namespace std;
class BaseClass
{
	public:
		void disp()
		{
			cout << "Function of Parent Class";
		}
};
class DerivedClass : public BaseClass
{
	public:
		void disp()
		{
			cout << "Function of Child Class";
		}
};
int main()
{
	BaseClass obj = DerivedClass();
	obj.disp();
	DerivedClass obj2;
	cout << "\n";
	obj2.disp();
	cout << endl;
	return 0;
}*/
#include<iostream>
using namespace std;
class DemoClass
{
	public:
		int demoFunction(int i)
		{
			return i;
		}
	double demoFunction(double d)
	{
		return d;
	}
};
int main(void)
{
	DemoClass obj;
	cout << obj.demoFunction(11.123) << endl;
	cout << obj.demoFunction(123) << endl;
	return 0;
}
















