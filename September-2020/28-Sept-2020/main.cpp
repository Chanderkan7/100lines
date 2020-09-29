#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cout << "Enter your number: ";
	cin >> n;
	if (n % 2 == 0)
	{
		cout << "\nNumber is EVEN!\n";
	}
	else
	{
		cout << "\nNumber is ODD!\n";
	}
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
	obj.setMyValues(100, 'X');
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
	obj.setCh('A');
	obj.setNum(100);
	cout << obj.getNum();
	cout << obj.getCh();
	return 0;
}
/*#include<iostream>
using namespace std;
class Animal
{
	public:
	void animalSound()
	{
		cout << "This is a generic function.";
	}
};
class Dog: public Animal
{
	public:
	void animalSound()
	{
		cout << "Woof!";
	}
};
int main()
{
	Dog dog1;
	cout << "calling dog1.animalSound(): ";
	dog1.animalSound();
	cout << endl;
	Animal *animal1;
	animal1 = new Dog();
	cout << "calling animal1 -> animalSound()";
	animal1 -> animalSound();
}*/
