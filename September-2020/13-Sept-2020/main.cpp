#include<iostream>
using namespace std;
class ParentClass
{
	public:
		int var1 = 100;
};
class ChildClass: public ParentClass
{
		public:
			int var2 = 500;
};
int main(void)
{
	ChildClass obj;
}
/*class Car
{
char name[20];
int speed;
int weight;
public:
void break1()
{	
	}
	void slowDown(){		
	}	
};
int main()
{
	Car ford;
}
/*#include<iostream>
using namespace std;
class Demo
{
private:
int  num;
char ch;
public:
Demo &setNum(int num)
{
	this -> num = num;
	return *this;
	}	
	Demo &setChar(char ch)
	{
		this -> num++;
		this -> ch = ch;
		return *this;
	}
	void displayMyValue()
	{
		cout << num << endl;
		cout << ch;
	}
};
int main()
{
	Demo obj;
	obj.setNum(100).setChar('A');
	obj.displayMyValue();
	return 0;
}
/*#include <iostream>
using namespace std;
class Demo
{
	private:
	int num;
	char ch;
	public:
	void setMyValues(int num, char ch)
	{
		this -> num = num;
		this -> ch = ch;
	}	
	void displayMyValue()
	{
		cout << num << endl;
		cout << ch;
	}
};
int main()
{
	Demo obj;
	obj.setMyValues(100, 'A');
	obj.displayMyValue();
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	/*int *p;
	int num = 1;
	cout << num;
	p = &num;
	cout << p;
	cout << *p;
	int *p;
	int arr[] = {1, 2, 3, 4, 5};
	p = arr;
	for(int i = 0; i < 6; i++)
	{
		cout << *p <<endl;
		p++;
	}
	return 0;
}*/
