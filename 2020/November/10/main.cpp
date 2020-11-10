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
	cout << endl;
	obj2.disp();
	cout << endl;
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
class B : public A
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
class Animal
{
	public:
		virtual void sound() = 0;
		void sleeping()
		{
			cout << "Sleeping";
		}
};
class Dog :public Animal
{
	public:
		void sound()
		{
			cout << "Woof" << endl;
		}
};
int main()
{
	Dog obj;
	obj.sound();
	obj.sleeping();
	return 0;
}
/*#include<iostream>
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
}*/
