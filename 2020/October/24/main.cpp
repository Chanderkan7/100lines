#include<iostream>
using namespace std;
class Add
{
	public:
		int sum(int num1, int num2)
		{
			return num1+num2;
		}
		int sum(int num1, int num2, int num3)
		{
			return num1+num2+num3;
		}
};
int main()
{
	Add obj;
	cout << "First output: " << obj.sum(10,20) << endl;
	cout << "Second output: " << obj.sum(12,32,44) << endl;
	cout << "Hello!";
	cout << "World!";
	cout << "Completion of program";
	cout << "Brilliant!";
	return 0;
}
/*#include<iostream>
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
	cout << obj.demoFunction(11.123);
	cout << endl;
	cout << obj.demoFunction(21);
	return 0;
}
/*#include<iostream>
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
