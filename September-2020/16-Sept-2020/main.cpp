#include <iostream>
using namespace std;
class BaseClass
{
	public:
		void displ()
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
	obj.displ();
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
	void disp()
	{
		cout << "Function of Parent Class";
	}
};
class DerivedClass: public BaseClass
{
	public:
		void disp()
		{
			cout << "Function of Child Class";
		}
};
int main()
{
	DerivedClass obj = DerivedClass();
	obj.disp();
	return 0;
}
/*#include <iostream>
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
	cout << obj.demoFunction(11.134) << endl;
	cout << obj.demoFunction(123);
	return 0;
}
/*#include<iostream>
using namespace std;
class A
{
	public:
		void disp()
		{
			cout << "Super Class Function " << endl;
		}
};
class B: public A
{
	public:
	void disp()
	{
		cout <<"Sub Class Function: " << endl;
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
/*#include <iostream>
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
	cout << "First Output: " << obj.sum(10, 20) << endl;
	cout << "Second Output: " << obj.sum(11, 22, 33);
	return 0;
}*/
