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
	for (int i =0; i < 10 ; i++)
	{
		cout << i << endl;
	}
	return 0;
}
/*#include<iostream>
using namespace std;
class Add
{
	public:
		int sum(int num1, int num2)
		{
			return (num1+num2);
		}
		int sum(int num1, int num2, int num3)
		{
			return (num1+num2+num3);
		}
};
int main()
{
	Add obj;
	cout << "First output" << obj.sum(10, 20) << endl;
	cout << "Second output" << obj.sum(10, 20, 40) << endl;
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
class BaseClass
{
	public:
		void disp()
		{
			cout << "Function of base class";
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
