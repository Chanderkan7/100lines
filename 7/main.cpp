/*#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void sound() = 0;
		void sleeping()
		{
			cout << "Sleeping!";
		}
};
class Dog: public Animal
{
	public:
		void sound()
		{
			cout << "Woof!" << endl;
		}
};
int main()
{
	Dog obj;
	obj.sound();
	obj.sleeping();
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int number1;
	cout << "Enter the number: ";
	cin >> number1;
	if (number1 % 2 == 0)
	{
		cout << "Number is even!" << endl;
	}
	else
	{
		cout << "Number is odd!" << endl;	
	}
	return 0;
}
#include<iostream>
using namespace std;
class XYZ
{
	private:
		char ch = 'A';
		int num1 = 10;
	public:
		friend class ABC;
};
class ABC
{
	public:
		void disp(XYZ obj)
		{
			cout << obj.ch << endl;
			cout  << obj.num1 << endl;
		}
};
int main()
{
	ABC obj;
	XYZ obj2;
	obj.disp(obj2);
	return 0;
}*/
#include<iostream>
using namespace std;
class BaseClass
{
	public: 
		void disp()
		{
			cout << "Function of Parent!";
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
	cout << "\n";
	obj2.disp();
	cout << endl;
	cout << "Take it!";
	cout << "Hello World!";
	cout << "Hello!";
	return 0;
}
