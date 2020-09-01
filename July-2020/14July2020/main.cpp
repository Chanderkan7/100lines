#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
/*void makeMeYoung (int* age){
	cout << "I used to be " << *age << endl;
	*age = 21;
}
void actYourAge(int& age){
	age = 39;
}*/
class Animal{
	//Attributes : hieght weight (VARIABLES)
	//Capabilities : Run (METHODS)
	private:
		int height;
		int weight;
		string name;
		static int numOfAnimals;
	public:
		int getHeight(){ return height;}
		int getWeight(){ return weight;	}
		string getName() {return name; }
		void setHeight(int cm) {height = cm; }
		void setWeight(int kg) { weight = kg; }
		void setName(string animalName) { name = animalName;	}
//		void setAll(int, int, string);
		Animal (int, int, string);
		Animal();
		~Animal();
		static int getNumOfAnimal() {return numOfAnimals; }
		void toString();
};
/*int Animal::numOfAnimals = 0;
void Animal::setAll(int height, int weight, string name){
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;
}*/
Animal::Animal(int height, int weight, string name){
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;
}
Animal::~Animal() {
	cout << "Animal " << this -> name << " destroyed." << endl;
}
Animal::Animal(){
	Animal::numOfAnimals++;
}
void Animal::toString(){
	cout << this -> name << " is " << this -> height 
	<< " cms tall and " << this -> weight << " kgs in weight "<< endl;
}
class Dog : public Animal{
	private:
		string sound = "Woof";
	public:
		void getSound() {cout << sound << endl;}
	Dog (int, int, string, string);
	Dog () : Animal(){};
	void toString();
}; 

Dog::Dog(int height, int weight, string name, string bark) :
	Animal(height, weight, name){
		this -> sound = bark;
	}
void Dog::toString() {
	cout << this -> getName() << " is " << this -> getHeight() << 
	" cms tall and " << this -> getWeight() << 
	cout << " kgs in weight and says " << this -> sound;
}
int main(int argc, char** argv) {
	cout << "****** 14 July 2020 *********\n";
/*	int number = 0;
	try{
		if (number != 0){
			cout << 2/number << endl;
		}  else throw(number);
	}
	catch (int number){
		cout << number << " Is not valid " << endl;
	} 
	int myAge = 39;
	char myGrade = 'A';
	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;
	cout << "myAge is located at " << &myAge << endl;
	int* agePtr = &myAge;
	cout << "Address of pointer " << agePtr << endl;
	cout << "Data at memory address " << *agePtr << endl;
	int badNums[5] = {4, 13, 14, 24, 34};
	int* numArrayPtr =  badNums;
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	numArrayPtr++;
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	cout << "Address " << badNums << endl;
	makeMeYoung(&myAge);
	cout << "I'm " << myAge << " years old now" << endl;
	int& ageRef = myAge;
	cout <<"myAge : " << myAge << endl;
	ageRef++;
	cout << "myAge : " << myAge << endl;
	actYourAge(ageRef);
	cout << "myAge : " << myAge << endl;*/
	Animal fred;
	fred.setHeight(35);
	fred.setWeight(10);
	fred.setName("Fred");
	cout << fred.getName() << " is " << fred.getHeight() <<
	" cms tall and " << fred.getWeight() << " kgs in weight" << endl;
	Animal tom(36, 15, "Tom");
	cout << tom.getName() << " is " << tom.getHeight() <<
	" cms tall and " << tom.getWeight() << " kgs in weight"
	<< endl;
	Dog spot(38, 16, "Spot", "Woof");
	cout << "Number of Animals " << Animal::getNumOfAnimal()<< endl;
	spot.getSound();
	tom.toString();
	spot.toString();
	spot.Animal::toString();
	return 0;
}
