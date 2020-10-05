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
	cout << "First Object: " << obj.sum(10,20) << endl;
	cout << "Second Object: " << obj.sum(10, 30, 40) << endl;
	int num1;
	cout << "Enter the number: " << endl;
	cin >>num1;
	if (num1%2 == 0)
	{
		cout << "number is even";
	}
	else
	{
		cout << "\nnumber is odd!";
	}
}
/*#include<iostream>
using namespace std;
class XYZ
{
	private:
		int num = 100;
		char ch = 'Z';
	public:
		friend void disp(XYZ obj);
};
void disp(XYZ obj)
{
	cout << obj.num << endl;
	cout << obj.ch << endl;
}
int main()
{
	XYZ obj;
	disp(obj);
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
class Dog: public Animal
{
	public:
		void sound()
		{
			cout <<"Woof!" << endl;
		}
};
int main()
{
	Dog obj;
	obj.sound();
	obj.sleeping();
	return 0;
}*/
