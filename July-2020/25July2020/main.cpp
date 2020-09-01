#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
/*class Customer{
	private:
		friend class GetCustomerData;
		std::string name;
	public:
		Customer(std::string name){
			this -> name = name;
		}
};
class GetCustomerData{
	public:
		static std::string GetName(Customer& customer){
			return customer.name;
		}
};
struct Shape{
	double length, width;
	Shape(double l = 1, double w = 1){
		length = l;
		width = w;
	}
	double Area(){
		return length * width;
	}
	private:
		int id;
};
struct Circle : Shape{
	Circle (double width){
		this -> width = width;
	}
	double Area(){
		return 3.1415 * std::pow((width/2), 2);
	}
};*/
class Shape{
	protected:
		double height;
		double width;
	public:
		Shape(double length){
			height = length;
			width = length;
		}
		Shape (double h, double w){
			height = h;
			width = w;
		}
		virtual double Area(){
			return height*width;
		}
};
class Circle : public Shape{
	public:
		Circle(double w): Shape(w){}
		double Area(){
			return 3.1415 * std::pow((width/2), 2);
		}
};
void ShowArea(Shape& shape){
	std::cout << "Area : " << shape.Area() << "\n";
}
int main(int argc, char** argv) {
	std::cout << "***********  25 July 2020 ************** \n";
	Shape square(10,5);
	Circle circle(10);
	ShowArea(square);
	ShowArea(circle);
	/*Shape shape(10, 10);
	std::cout << "Square Area: " << shape.Area() << "\n";
	Circle circle(10);
	std::cout << "Circle Area: " << circle.Area() << "\n";
	Shape rectangle{10, 15};
	std::cout << "Rectangle Area: " << rectangle.Area() <<"\n";
	Customer tom("tom");
	GetCustomerData getName;
	std::cout << "Name: " << getName.GetName(tom) <<"\n";*/
	std::cout <<"Today I learnt about classes and polymorphism\n";
	std::cout <<"While it is intersting, it is also mundane...\n";
	std::cout <<"I wish I could learn a practical application of these\n";
	int i;
	std::cout << "Please enter your age: ";
	std::cin >> i;
	if (i <= 18){
		std::cout << "You're too young to vote!\n";
	} else{
		std::cout << "You can vote!\n";
	}
	std::cout << "Atleast for simple programs, I am able to work\n";
	std::cout << "This hesitation will go away slowly!\n";
	std::cout << "Cheers!!\n";
	return 0;
}











