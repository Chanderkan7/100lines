#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout << "Enter your number: ";
	cin >> num1;
	if (num1%2 == 0)
	{
		cout << "Even Number!";
	}
	else
	{
		cout << "Odd Number!";
	}
}
/*#include<iostream>
using namespace std;
class Animal
{
	public:
	virtual void animalSound()
	{
		cout << "This is a generic Function";	
	}		
};
class Dog: public Animal
{
		public:
			void animalSound()
			{
				cout << "Woof";
			}
};
int main()
{
	Animal *obj;
	obj = new Dog();
	obj -> animalSound();
	return 0;
}
/*#include <iostream>
using namespace std;
class ExampleEncap
{
	private:
		int num;
		char ch;
	public:
		int getNum() const
		{
			return num;
		}
		char getCh() const
		{
			return ch;
		}
		void setNum(int num)
		{
			this -> num = num;
		}
		void setCh(char ch)
		{
			this -> ch = ch;
		}
};
int main()
{
	ExampleEncap obj;
	obj.setNum(100);
	obj.setCh('A');
	cout << obj.getNum() << endl;
	cout << obj.getCh();
	return 0;
}
/*#include<iostream>
using namespace std;
class AbstractionExample
{
	private:
		int num;
		char ch;
	public:
		void setMyValues(int n, char c)
		{
			num = n;
			ch = c;
		}
		void getMyValues()
		{
			cout << "Number is: " << num << endl;
			cout << "Char is: " << ch << endl;
		}
};
int main()
{
	AbstractionExample obj;
	obj.setMyValues(100, 'S');
	obj.getMyValues();
	return 0;
}*/
