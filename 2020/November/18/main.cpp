#include<iostream>
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
	return 0;
}
/*#include<iostream>
using namespace std;
class BaseClass
{
	public:
		void disp()
		{
			cout << "Function of Base Class";
			cout << endl;
		}
};
class DerivedClass
{
	public:
		void disp()
		{
			cout << "Function of Derived Class";
			cout << endl;
		}
};
int main()
{
/*	BaseClass obj1;
	obj1.disp();
	DerivedClass obj2;
	obj2.disp();
	BaseClass obj3 = DerivedClass();
	obj3.disp();
	return 0;
}
/*#include<iostream>
using namespace std;
class ParentClass
{
	private:
		int parentInt = 10;
		char parentChar = 'A';
	public:
		int ParentReturnsInt(int recievesInt)
		{
			recievesInt = parentInt+1;
			return recievesInt;
		}
		char ParentReturnsChar(char recievesChar)
		{
			recievesChar = parentChar;
			return recievesChar;
		}
};
class ChildClass : public ParentClass
{
	public:
		void ChildClass1()
		{
			cout <<endl << "I am child!" << endl;
		}
};
int main()
{
	char ch, ch1;
	int int1;
	ParentClass obj;
	ch = obj.ParentReturnsChar('ABC');
	cout << ch;
	cout << endl;
	int1 = obj.ParentReturnsInt(20);
	cout << int1;
	ChildClass obj2;
	obj2.ChildClass1();
	ch1 = obj2.ParentReturnsChar('r');
	cout << endl << ch1 << endl;
	for(int i = 0; i < 10; i++)
	{
		if(i%2==0)
		{
			cout << i << " is even!";	
		}	
		else 
		{
			cout << i << " is odd!";
		}
		cout << endl;
	}
	return 0;
}*/
