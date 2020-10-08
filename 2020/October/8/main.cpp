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
	Animal()
	{
		cout << "I'm constructor of Animal class...\n";
	}
};
class Dog: public Animal
{
	public:
		void sound()
		{
			cout << "Woof!" << endl;
		}
	Dog()
	{
		cout << "I'm a constructor of Dog!\n";
	}
};
int main()
{
	Dog obj;
	obj.sound();
	obj.sleeping();
	return 0;
}
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
#include<iostream>
using namespace std;
class Add
{
	public:
		int sum(int num1, int num2, int num3)
		{
			return num1+num2+num3;
		}
		int sum(int num4, int num5)
		{
			return num4+num5;
		}
};
int main()
{
	Add obj;
	cout << "First Output " << obj.sum(10, 20) << endl;
	cout << "Second Output " << obj.sum(10,20,30) << endl;
	return 0;
}*/
#include<iostream>
using namespace std;
class A
{
	public:
	void disp()
	{
		cout << "Super class function!"<< endl;
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
