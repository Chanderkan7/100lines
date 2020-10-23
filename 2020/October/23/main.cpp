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
int main()
{
	DemoClass obj;
	cout << obj.demoFunction(11.123) << endl;
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
			cout << "Function of Parent class";
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
}
/*#include<iostream>
using namespace std;
class BaseClass
{
	private:
		int num1 = 10;
	public:
		int num2 = 20;
		int display(int num)
		{
			cout << "Number entered is " << num << endl;
			return num1;
		}
		BaseClass()
		{
			cout << "Hello from BaseClass!";
		}
};
int main()
{
	BaseClass obj;
	cout << endl;
	cout << obj.num2;
	obj.display(30);
	int num3 = obj.display(40);
	cout << endl;
	cout << num3;
	return 0;
}*/
