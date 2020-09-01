#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Employee{
	private:
		int salary;
	public:
		void setSalary(int s){
			salary = s;
		}
		int getSalary(){
			return salary;
		}
};
class Animal{
	public:
		void AnimalSound(){
			cout << "The animal makes a sound.\n";
		}
};
class Pig : public Animal{
	public:
		void AnimalSound(){
			cout <<"Pig says wee wee...\n";
		}
};
class Dog: public Animal{
	public:
		void AnimalSound(){
			cout << "Dog says bowww boww...\n";
		}
};

class MyClass{
	public:
		void MyFunction(){
			cout << "Some content in Parent class...\n";
		}
};
class MyOtherClass{
	public:
		void MyOtherFunction(){
			cout <<"Some content in another parent class...\n";
		}
};
class MyChildClass : public MyClass, public MyOtherClass{
};
int PlusFunction(int x, int y){
	return x + y;
}
double PlusFunctionDouble(double x, double y){
	return x +y;
}
int main() {
	cout << "********* 22 July 2020 ***********\n";
	int myNum1 = PlusFunction(8, 5)	;
	double myNum2 = PlusFunctionDouble(4.3, 6.26);
	cout <<"Int: "<< myNum1 << endl;
	cout <<"Double: "<< myNum2 << endl; 
	MyChildClass myObj;
	myObj.MyFunction();
	myObj.MyOtherFunction();
	Animal MyAnimal;
	Pig myPig;
	Dog myDog;
	MyAnimal.AnimalSound();
	myPig.AnimalSound();
	myDog.AnimalSound();
	Employee emp;
	emp.setSalary(50000);
	cout << "Salary is: " << emp.getSalary()<< "\n";
	try{
		int age = 15;
		if ( age > 18){
			cout << "Access Granted!\n";
		} else{
			throw(age);
		}
	}
	catch( int age){
		cout <<"You are just " << age << " year old, ACCESS DENIED!\n";
	}
	ofstream MyWriteFile("filename.txt");
	MyWriteFile << "Files can be tricky but it is fun enough!!\n";
	MyWriteFile.close();
	string myText;
	ifstream MyReadFile("filename.txt");
	while (getline(MyReadFile, myText)){
		cout << myText;
	}
	MyReadFile.close();
	cout <<"\n";
	string cars[4] = { "Volvo", "Tata", "Toyota", "Mazda"};
	for (int i = 0; i < 4; i++){
		cout << cars[i] << "\n";
	}
	string food = "Pizza";
	string &meal = food;
	string* meal2 = &food; 
	cout << "cout << food: " << food << "\n";
	cout << "cout << &food: " << &food << "\n";
	cout << "cout meal: " << meal << "\n";
	cout << "cout &meal: " << &meal << "\n";
	cout << "cout meal2: " << meal2 << "\n";
	cout << "cout *meal2: " << *meal2 << "\n";
	cout << "cout &meal2: " << &meal2 << "\n";
	return 0;
}
