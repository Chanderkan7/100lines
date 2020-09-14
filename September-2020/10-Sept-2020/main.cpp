#include<iostream>
#include <string>
using namespace std;
class Animal
{
	private:
		string name;
		double height;
		double weight;
		static int numOfAnimals;
	public:
		string GetName()
		{
			return name;
		}
		void SetName(string name)
		{
			this -> name  = name;
		}
		double GetHeight()
		{
			return height;
		}
		void SetHeight(double height)
		{
			this -> height = height;
		}
		double GetWeight()
		{
			return weight;
		}
		void SetWeight(double weight)
		{
			this -> weight = weight;			
		}
		void SetAll (string, double, double);
		Animal(string, double, double);
		Animal();
		~Animal();
		static int GetNumOfAnimals()
		{
			return numOfAnimals;
		}
		void ToString();
};
int Animal::numOfAnimals = 0;
void Animal::SetAll(string name, double height, double weight)
{
	this -> name = name;
	this -> weight = weight;
	this -> height = height;
	Animal::numOfAnimals++;
}
Animal::Animal(string name, double height, double weight)
{
	this -> name = name;
	this -> height = height;
	this -> weight = weight;
	Animal::numOfAnimals;
}
Animal::~Animal()
{
	cout << "Animal " << this -> name << " destoryed.\n";
}
void Animal::ToString()
{
	cout << this -> name << " is " << this -> height
	<< " cms tall " << this -> weight << " kgs in weight. ";
}
class Dog: public Animal
{
	
		
	public:
		string sound = "Woof";
		void MakeSound()
		{
			cout << "The dog " << this -> GetName() << " says "
			<< this -> sound << ". \n";
		}
		Dog (string, double, double, string);
		Dog():Animal(){};
		void ToString();
};
Dog::Dog(string name, double height, double weight, string sound):Animal(name, height, weight)
{
	this -> sound = sound;	
}
void Dog::ToString()
{
	cout << this -> GetName() << " is " << this -> GetHeight()
	<< " cms tall and "  << this -> GetWeight()
	<< " kgs in weight and says " << this -> sound << ". \n";
}
int main(int argc, char** argv)
{
	cout << "****\nClasses Implementation\n";
	Animal fred;
	fred.ToString();
	fred.SetHeight(33);
	fred.SetWeight(10);
	fred.SetName("Fred");
	fred.ToString();
	Animal Tom("Tom", 36, 15);
	Tom.ToString();
	Dog spot("Spot", 38, 16, "Woof");
	Dog spike;
	spike.ToString();
	spot.ToString();
	cout << "Num of animals: " <<  Animal::GetNumOfAnimals() << " .\n";
	return 0;	
}

/*#include <iostream>
#include <string>
using namespace std;
class Animal
{
	private: 
		string name;
		double height;
		double weight;
		static int numOfAnimals;
	public:
		string GetName()
		{
			return name;
		}	
		void SetName(string name)		
		{
			this -> name = name;
		}
		double GetHeight()
		{
			return height;
		}
		void SetHeight(double height)
		{
			this -> height = height;
		}
		double GetWeight()
		{
			return weight;
		}
		double SetWeight(double weight)
		{
			this -> weight = weight;
		}
		void SetAll(string, double, double);
		Animal (string, double, double);
		Animal();
		~Animal();
		static int GetNumOfAnimals()
		{
			return numOfAnimals;
		}
		void ToString();
};
int Animal::numOfAnimals = 0;
void Animal::SetAll(string name, double height, double weight)
{
	this -> name = name;
	this -> weight = weight;
	this -> height = height;
	Animal::numOfAnimals++;
}
Animal::Animal(string name, double height, double weight)
{
	this -> name = name;
	this -> height = height;
	this -> weight = weight;
	Animal::numOfAnimals;
}
Animal::~Animal()
{
	cout << "Animal " << this -> name << " destroyed.\n";
}
void Animal::ToString()
{
	cout << this -> name << " is " << this -> height << " cms tall " << this -> weight << " kgs in weight";
}
class Dog: public Animal
{
	private:
		string sound = "woof";
	public:
		void MakeSound()
		{
			cout << "The dog " << this -> GetName() << " says " << this -> sound << ". \n";
		}
		Dog(string, double, double, string);
		Dog():Animal(){};
		void ToString();
};
Dog::Dog(string name, double height, double weight, string sound): Animal(name, height, weight)
{
	this -> sound = sound;
}
void Dog::ToString()
{
	cout << this ->GetName() << " is " << this -> GetHeight() << " cms tall and " << this -> GetWeight() << " kgs in weight and says " << this -> sound << ". \n";
}

int main(int argc, char** argv)
{
	cout << "*** Classes *****\n";
	Animal fred;
	fred.ToString();
	fred.SetHeight(33);
	fred.SetWeight(10);
	fred.SetName("Fred");
	fred.ToString();
	Animal tom("tom",36,15);
	Dog spike;
	spike.ToString();
	return 0;
}*/
