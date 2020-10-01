#include<iostream>
using namespace std;
class xyz
{
	private:
		int num = 100;
		char ch = 'Z';
	public:
		friend void disp(xyz obj);
};
void disp(xyz obj)
{
	cout << obj.num << endl;
	cout << obj.ch << endl;
}
int main()
{
	xyz obj;
	disp(obj);
	return 0;
}
/*#include<iostream>
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
	cout << "First Output: " << obj.sum(10, 20) <<endl;
	cout << "Second Output: " << obj.sum(10,20, 30) <<endl;
	return 0;
}
/*#include<iostream>
using namespace std;
class A
{
	public:
		void disp()
		{
			cout << "Super class function!" << endl;
		}
};
class B: public A
{
	public:
		void disp()
		{
			cout << "Sub class function: " << endl;
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
	cout << obj.demoFunction(11.123) << endl;
	cout << obj.demoFunction(123);
	return 0;
}
/*#include<iostream>
using namespace std;
class BaseClass
{
	public:
		void displ()
		{
			cout << "Function of Base Class!";
		}
};
class DerivedClass : public BaseClass
{
	public:
		void displ()
		{
			cout << "Function of child class";
		}
};
int main()
{
	BaseClass obj = DerivedClass();
	obj.displ();
	DerivedClass obj2;
	cout << endl;
	obj2.displ();
	return 0;
}*/
