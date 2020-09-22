#include<iostream>
using namespace std;
class AbstractionExample
{
	private:
		int num;
		char ch;
	public:
		void setMyValues(int n, char c)
		{
			num = c;
			ch = c;
		}
		void getMyValues()
		{
			cout << "Number is: " << num << endl;
			cout << "Character is: "<< ch << endl;
		}
};
int main()
{
	AbstractionExample obj;
	obj.setMyValues(10, 'X');
	obj.getMyValues();
	return 0;
}
/*#include<iostream>
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
	obj.setCh(100);
	cout << obj.getNum() << endl;
	cout << obj.getCh() << endl;
	return 0;
}

/*#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void animalSound()
		{
			cout << "This is a generic function!";
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
		cout << "This is generic function!\n";
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
