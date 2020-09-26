#include<iostream>
using namespace std;
class AbstractionExample
{
	private:
		int num;
		char c;
	public:
		void setMyValues(int n, char ch)
		{
			num = n;
			ch = c;
		}
	void getMyValues()
	{
		cout << "Number is: " << num << endl;
		cout << "Char is: " << c << endl;
	}
};
int main()
{
	AbstractionExample obj;
	obj.setMyValues(100, 'x');
	obj.getMyValues();
	return 0;
}
/*#include<iostream>
using namespace std;
class EncapExample
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
	EncapExample obj;
	obj.setNum(100);
	obj.setCh('A');
	cout << obj.getCh() << endl;
	cout << obj.getNum()<< endl;	
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
/*#include<iostream>
using namespace std;
class Animal
{
	public:
		void animalSound()
		{
			cout << "Woof";
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
