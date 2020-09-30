/*#include<iostream>
using namespace std;
class AbstractionExample
{
	private:
		int num;
		char ch;
	public:
		void setMyValue(int n, char c)
		{
			num= n;
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
	obj.setMyValue(100, 'X');
	obj.getMyValues();
	return 0;
}
#include<iostream>
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
		int getCh() const
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
	obj.setCh('A');
	obj.setNum(100);
	cout << obj.getCh()<< endl;
	cout << obj.getNum()<< endl;
	return 0;
}
#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void animalSound()
		{
			cout << "This is a generic function";
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
}*/
#include<iostream>
using namespace std;
class Animal
{
	public:
		void animalSound()
		{
			cout << "This is a generic function";
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








