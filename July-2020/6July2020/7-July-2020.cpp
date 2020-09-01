/* #include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <cmath>
#include <cmath>
using namespace std;
struct Shape{
	double length, width;
	Shape(double l =1, double w =1){
		length = l;
		width = w;
	}
	double Area(){
		return length*width;
	}
	private:
		int id;
};
struct Circle : Shape {
	Circle(double width){
		this -> width = width;
	}
	double Area(){
		return 3.14 * pow((width/1),2);
	}
};
class Box{
	public:
		double length, width, breadth;
		string boxString;
		Box(){
			length = 1, width = 1, breadth = 1;
		}
		Box (double l, double w, double b){
			length = l, width = w, breadth = b;
		}
		Box& operator ++ (){
		length++;
		width++;
		breadth++;
		return *this;
		}
		operator const char*(){
			ostringstream boxStream;
			boxStream << "Box : " << 
			length << ", " <<
			width <<", "<<
			breadth;
			boxString = boxStream.str();
			return boxString.c_str();			
		}
		Box operator + (const Box& box2){
			Box boxSum;
			boxSum.length = length + box2.length;
			boxSum.width = width + box2.width;
			boxSum.breadth = breadth + box2.breadth;
			return boxSum;
		}
		bool operator == (const Box& box2){
			return ((length == box2.length) && 
			(width == box2.width) &&
			(breadth == box2.breadth));
		}
};
vector<int> GenerateRandVect(int numOfNums,
int min, int max);

int main(int argc, char** argv)
{
	cout <<"********7th July 2020*******" << endl;
	Shape shape(10,10);
	cout << "Square Area: " << shape.Area() << endl;
	Circle circle(10);
	cout <<"Circle Area: " << circle.Area() << endl;
	//Shape rectangle{10,15};
	//cout << "Rectangle Area: " << rectangle.Area() << endl;
	Box box(10,10,10);
	cout << "Before increment operator: " << box << endl;
	++box;
	cout <<"After increment operator: " << box << endl;
	Box box2 (5, 5, 5);
	cout <<"Box1 + Box2 " << box + box2 << endl;
	cout << "Box1 == Box2? " << (box == box2) << endl;
	vector<int> vecVals = GenerateRandVect(10, 1, 50);
	sort(vecVals.begin(),vecVals.end(), 
	[](int x, int y){return	x < y ;});
	for (auto val:vecVals)
	cout << val << endl;
	return 0;
}
vector<int> GenerateRandVect(int numOfNums,
int min, int max){
	vector<int> vecValues;
	srand(time(NULL));
	int i = 0, randVal = 0;
	while(i<numOfNums){
		randVal = min + rand() % ((max+1) -min);
		vecValues.push_back(randVal);
		i++;
	}
	return vecValues;
}
*/
