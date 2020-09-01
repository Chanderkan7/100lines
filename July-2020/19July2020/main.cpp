#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>
class Animal{
	private:
		std::string name;
		double height;
		double weight;
		static int numOfAnimals;
		public:
			std::string GetName() {return name;}
			void SetName(std::string name){ this -> name = name;}
			double GetHeight(){return height;}
			void SetHeight(double height) {this->height = height;}
			double GetWeight() {return weight;	}
			void SetWeight(double weight) {this -> weight = weight;	}
			void SetAll(std::string, double, double);
			Animal(std::string, double, double);
			Animal();
			~Animal();
			static int GetNumOfAnimals(){return numOfAnimals;}
			void ToString();
};
int Animal::numOfAnimals = 0;
void Animal::SetAll(std::string name, double height, double weight){
	this -> name = name;
	this -> weight = weight;
	this -> height = height;
	Animal::numOfAnimals++;
}
Animal::Animal(std::string name, double height, double weight){
	this -> name = name;
	this -> height = height;
	this -> weight = weight;
	Animal::numOfAnimals++;
}
Animal::Animal(){
	this -> name = "";
	this -> weight = 0;
	this -> height = 0;
	Animal::numOfAnimals++;
}
Animal::~Animal(){
	std::cout<<"Animal " << this -> name << " destroyed. \n";
}
void Animal::ToString(){
	std::cout << this  -> name << " is " << this -> height 
	<< " cms tall " << this -> weight << " kgs in weight. \n";
}
class Dog: public Animal{
	private:
		std::string sound = "Woof";
	public:
		void MakeSound(){ std::cout<<"The dog" << this ->GetName()
		<< " says " << this -> sound <<". \n";	}
		Dog (std::string, double, double, std::string);
		Dog():Animal(){};
		void ToString();
};
Dog::Dog(std::string name, double height, double weight,
	std::string sound): Animal(name, height, weight){
		this -> sound = sound;
	}
void Dog::ToString(){
	std::cout<< this -> GetName() << " is " << this -> GetHeight()
	 <<	" cms tall and " << this ->GetWeight() 
	 << " kgs in weight and says " << this -> sound << ". \n"; 
}
int main(int argc, char** argv) {
	std::cout << "********** 19th July 2020 ************\n";
	Animal fred;
	fred.ToString();
	fred.SetHeight(33);
	fred.SetWeight(10);
	fred.SetName("Fred");
	fred.ToString();
	Animal tom("Tom", 36, 15);
	tom.ToString();
	//Dog spot;
	Dog spot("Spot" , 38, 16, "Woooof");
	Dog spike;
	spike.ToString();
	spot.ToString();
	std::cout<<"Number of Animals: " << Animal::GetNumOfAnimals()
	<< ". \n";
	std::cout << "fred.GetHeight() = " << fred.GetHeight() << ". \n";
	std::cout << "spot.GetWeight() = " << spot.GetWeight() <<". \n";
	std::cout << "\nToday I learnt about OOP. \n";
	std::cout << "Derek Banas is a great teacher.";
	std::cout << "I was able to connect with requirements. \n";
	std::cout << "The best part is that the concepts which did " <<
	" not work previously worked perfectly fine this time. \n";
	std::cout << "Next is to make a game where players will fight\n";
	std::cout << "If I started this today, it will become more to handle\n";
	std::cout << "So this will be handled tomorrow....\n";
	std::cout << "This is end of today's work!!!!!\n\n";
}
