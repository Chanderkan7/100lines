/*#include<iostream>
using namespace std;
class BaseClass
{
	public:
		void disp()
		{
			cout << "Function of base class";
		}
};
class DerivedClass :public BaseClass
{
	public:
		void disp()
		{
			cout << "Function of child class";
		}
};
int main()
{
	BaseClass obj = DerivedClass();
	obj.disp();
	DerivedClass obj2;
	cout << endl;
	obj2.disp();
	return 0;
}*/
/*#include<iostream>
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
	cout << obj.demoFunction(11.123)<< endl;
	cout << obj.demoFunction(876) << endl;
	return 0;
}
#include<iostream>
using namespace std;
class A
{
	public:
		void disp()
		{
			cout << "Super class function" << endl;
		}
};
class B: public A
{
	public:
		void disp()
		{
			cout << "Sub class function" << endl;
		}
};
int main()
{
	A obj;
	obj.disp();
	B obj2;
	obj2.disp();
	return 0;
}*/
#include<iostream>
using namespace std;
class Add
{
	public:
		int sum(int num1, int num2)
		{
			return(num1+num2);
		}
		int sum(int num1, int num2, int num3)
		{
			return (num1 + num2 + num3);
		}
};
int main()
{
	Add obj;
	cout << "First Output"<< obj.sum(19,22) << endl;
	cout << "Second Output" << obj.sum(45, 56, 65) << endl;
	for(int i =0 ; i < 10 ; i++)
	{
		cout << i;
		cout << endl;
	}
	return 0;
}
