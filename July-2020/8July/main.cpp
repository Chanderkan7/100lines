#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <cmath>
#include <ctime>
#include <fstream>
#include <deque>
#include <iterator>
using namespace std;
double MultBy2(double num){
	return num * 2;
}
#define PI 3.14159
#define AREA_CIRCLE(radius)(PI * pow(radius, 2))
template <typename T>
void Times2(T val){
	cout << val << " * 2 = " << val * 2 << endl;
}
template <typename T1>
T1 Add(T1 val, T1 val2){
	return val + val2;
}
template <typename T3>
T3 Max(T3 val, T3 val2){
	return (val < val2) ? val2 : val;
}
/*double DoMath(function<double(double)> func,double num){
	return func(num);
}*/
/*double MultBy3(double num){
	return num * 3;
}*/
template <typename T4, typename U>
class Person{
	public:
		T4 height;
		U weight;
		static int numOfPeople;
		Person(T4 h, U w){
			height = h, weight =w;
			numOfPeople++;
		}
		void GetData(){
			cout << "Height : " << height << " and weight: "
			<< weight << endl;
		}
};
template <typename T4, typename U> int Person<T4, U>::numOfPeople;
int main(int argc, char** argv) {
	cout << "8th July 2020\n";
	auto times2 = MultBy2;
	cout << "5 * 2 = " <<
	times2(5) << endl;
	cout << "Circle area: " << AREA_CIRCLE(5) << endl;
	Times2(5);
	Times2(5.3);
	cout << "5 + 4 = " << Add(5,4) << endl;
	cout << "5.5 + 4.4 = " << Add(5.5, 4.4) << endl;
	cout <<"Max 4 or 8 = " << Max(4, 8) << endl;
	cout <<"Max A or B = " << Max('A', 'B') << endl;
	cout <<"Max Dog or Cat = " << Max("Dog", "Cat") << endl;
	Person<double, int> mikeTyson(5.83, 216);
	mikeTyson.GetData();
	cout << "Number of People: " << mikeTyson.numOfPeople << endl;
	deque<int> nums = {1, 2, 3, 4};
	nums.push_front(0);
	nums.push_back(5);
	for (int x: nums){
		cout << "Containers example: "<< x << endl;
	}
	/*	vector <function<double(double)>> funcs(2);
	funcs[0] = MultBy2;
	funcs[1] = MultBy3;
	cout << "2 * 10 = "<< funcs[0](10)<<endl;
/*	cout << "6 * 2 = " <<
	DoMath(times2, 6) << endl;
	/*ofstream writeToFile;
	ifstream readFromFile;
	string txtToWrite = "";
	string txtFromFile = "";
	writeToFile.open("test.txt", ios_base::out | ios_base::trunc);
	if (writeToFile.is_open()){
		writeToFile << "Beginning of file\n";
		cout <<"Enter data to write : ";
		getline(cin, txtToWrite);
		writeToFile << txtToWrite;
		writeToFile << txtToWrite;
		writeToFile.close();
	}*/
	/*readFromFile.open("test.txt", ios_base::in);
	if (readFromFile.is_open()){
		while (readFromFile.good()){
			getline(readFromFile, txtFromFile);
			cout << txtFromFile << endl;
		}
		readFromFile.close();
	}*/
	return 0;
}
