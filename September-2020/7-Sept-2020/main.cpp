#include <iostream>
using namespace std;
class Base
{
	private:
		int pvt = 1;
	protected:
		int prot = 2;
	public:
		int pub = 3;
	int getPVT()
	{
		return pvt;
	}
};
class ProtectedDerived : protected Base
{
	public:
		int getProt()
		{
			return prot;
		}
		int getPub()
		{
			return pub;
		}
	
};
int main()
{
	ProtectedDerived object1;
	cout << "Private cannot be accessed" << endl;
	cout << "Protected = " << object1.getProt() << endl;
	cout << "Public = " << object1.getPub() << endl;
	return 0;
}
//******************************************************
/*#include<iostream>
using namespace std;
class Base
{
	private:
		int pvt = 1;
	protected:
		int prot = 2;
	public:
		int pub = 3;
	int getPVT()
	{
		return pvt;
	}
};
class PublicDerived : public Base
{
	public:
		int getProt()
		{
			return prot;
		}
};
int main()
{
	PublicDerived object1;
	cout << "Private = " << object1.getPVT() << endl;
	cout << "Protected = " << object1.getProt() << endl;
	cout << "Public = " << object1.pub << endl;
	return 0;
}*/
//*******************************************************
/*#include<iostream>
using namespace std;
class Animal
{
	private:
		string color;
	protected:
		string type;
	public:
		void eat()
		{
			cout << "Animal eats!" << endl;
		}
		void sleep()
		{
			cout << "Animal sleeps!" << endl;
		}
		void setColor(string clr)
		{
			color = clr;
		}
		string getColor()
		{
			return color;
		}
};
class Dog : public Animal
{
	public:
		void bark()
		{
			cout << "Dog is Animal which barks!" << endl;
		}
		
		void setType(string tp)
		{
			type = tp;
		}
		void displayInfo(string c)
		{
			cout << "I am a " << type << endl;
			cout << "My color is " << c << endl;
		}
};
int main()
{
	Animal animal1;
	Dog dog1;
	dog1.eat();
	dog1.sleep();
	dog1.bark();
	dog1.setColor("Black");
	dog1.bark();
	dog1.setType("mammal");
	dog1.displayInfo(dog1.getColor());
}*/
