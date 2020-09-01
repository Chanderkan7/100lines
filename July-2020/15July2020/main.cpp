#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Animal{
	public:
		virtual void makeSound(){
			cout<< "The animal says Grrr... " << endl;
		}
};
class Dog : public Animal{
	public:
		void makeSound() {
			cout << "The Dog says Woof..." << endl;
		}
};
class Cat : public Animal{
	public:
		void makeSound(){
			cout << "The cat says meow..." << endl;
		}
};
/*class Animal{
	public:
		void getFamily() { cout << "We are animals" << endl;}
	//	virtual void getClass()	{ }
		void getClass() { cout << "I'm an Animal" << endl;	}
};

class Dog : public Animal{
	public:
		getClass() { cout << "I'm a Dog. " << endl;	}
};
class GermanShephard : public Dog{
	public:
		void getClass() { cout <<"I'm a German Shephard. " << endl; }
		void getDerived() { cout <<"I'm an Animal and Dog " << endl;	}
};

void whatClassAreYou(Animal *animal){
	animal -> getClass();
	
}*/

class Car{
	public :
		virtual int getNumWheels() = 0;
		virtual int getNumDoors() = 0;
};
class StationWagon : public Car{
	public:
		int getNumWheels(){ cout <<"Station wagon has 4 wheels" << endl;
		}
		int getNumDoors() {
		cout << "Station wagon has 4 doors" << endl;}
		StationWagon() {}
		~StationWagon();
};
int main(int argc, char** argv) {
	cout << "****** 15 July 2020 *********\n";
	Animal* pCat = new Cat;
	Animal* pDog = new Dog;
	pCat -> makeSound();
	pDog -> makeSound();
	Car* stationWagon = new StationWagon();
	stationWagon -> getNumWheels();
/*	Animal *animal = new Animal;
	Dog *dog = new Dog;
	Dog spot;
	GermanShephard max;
	Animal* ptrDog = &spot;
	Animal* ptrGShephard = &max;
	ptrDog -> getFamily();
	ptrDog -> getClass();
	animal->getClass();
	dog->getClass();
	whatClassAreYou(animal);
	whatClassAreYou(dog);
	ptrGShephard -> getFamily();
	ptrGShephard -> getClass();*/
	return 0;
}

