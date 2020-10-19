#include<iostream>
using namespace std;
class XYZ
{
	private:
		char ch = 'A';
		int num = 11;
	public:
		friend class ABC;
};
class ABC
{
	public:
		void disp(XYZ obj)
		{
			cout << obj.ch << endl;
			cout << obj.num << endl;
		}
};
int main()
{
	ABC obj;
	XYZ obj2;
	obj.disp(obj2);
	return 0;
}
/*#include<iostream>
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
			cout << "Sub class function!" << endl;
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
	cout << obj.demoFunction(11.123)<< endl;
	cout << obj.demoFunction(1233321) << endl;
	return 0;
}
/*#include<iostream>
using namespace std;
class BaseClass
{
	public:
		void disp()
		{
			cout << "Funtion of Parent Class";
		}
};
class DerivedClass : public BaseClass
{
	public:
		void disp()
		{
			cout << "Funtion of Child Class";
		}
};
int main()
{
	BaseClass obj = DerivedClass();
	obj.disp();
	DerivedClass obj2;
	cout << endl;
	obj2.disp();
	cout << endl;
	return 0;
}*/
