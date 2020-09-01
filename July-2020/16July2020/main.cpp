#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
/*double AddNumbers(double num1, double num2);
void AssignAge(int age);
int AssignAge2(int age);
void AssignAge3(int* pAge);
void DoubleArray(int* arr, int size);*/
std::vector<int> Range(int start, int max, int step);
//using namespace std;
int main() {
	std::cout << "******* 16 July 2020 *************\n";
	std::vector<int> range = Range(1, 10, 2);
	for (auto y: range) std::cout << y << "\n";
	// How much to invest : $1000
	// Interst Rate expected : 8
	// Value of 10 years
	double investment = 0.0, interestRate = 0.0;
	std::cout <<"How much to invest: ";
	std:: cin >> investment;
	std:: cout <<"Interest Rate: ";
	std::cin >> interestRate;
	interestRate = interestRate * .01;
	for(auto y: Range(1, 10, 1)){
		investment += (investment * interestRate);
	}
	std::cout <<"Value after 10 years: " << investment << "\n";
	return 0;
	/*int age = 43;
	int arr[] = {1, 2, 3, 4};
	DoubleArray(arr, 4);
	for (int i=0; i< 4; i++){
		std::cout << "Array: " << arr[i] << "\n";
	}
	AssignAge3(&age);
	std::cout<<"Pointer Age: " << age << "\n";
	int* pAge = NULL;
	pAge = &age;
	std::cout<<"Address : " << pAge << "\n";
	std::cout<<"Value at address: " << *pAge <<"\n";
	int intArray[] = {1, 2, 3, 4};
	int* pIntArray = intArray;
	std::cout<<"1st value: " << *pIntArray << " Address " << pIntArray <<
	"\n";
	pIntArray++;
	std::cout<<"2nd value: " << *pIntArray <<" Address " << pIntArray <<
	"\n";
	pIntArray--;
	std::cout<<"1st value: " <<*pIntArray <<" Address " <<pIntArray
	<< "\n";
	
	std::vector <int> myVec(10);
	std::iota(std::begin(myVec),std::end(myVec), 0);
	for (int i = 0; i < myVec.size(); i++){
		std::cout << myVec[i] << "\n";
	}
	for(auto y: myVec) std::cout << y << "\n" ;
	int val = 8;
	if ((val % 2) == 0){
		std::cout << val << " is even\n";
	}
	else {
		std::cout << val << " is odd\n";
	}
	std::vector<int> myVec2(10);
	std::iota(std::begin(myVec2), std::end(myVec2), 1);
	for (auto y: myVec2){
		if((y%2) == 0){
			std::cout << y << "\n";
		}
	}
	double num1, num2;
	std::cout << "Enter Num 1: ";
	std::cin >> num1;
	std::cout <<"Enter Num 2: ";
	std::cin >> num2;
	printf("%.1f + %.1f = %.1f\n", num1, num2, AddNumbers(num1, num2));

	int age = 43;
	AssignAge(age);
	std::cout << "New age: " << age << "\n";
	age = AssignAge2(age);
	std::cout << "Returned age: " << age << "\n";
*/
}
/*double AddNumbers(double num1, double num2){
	return num1+num2;
}
void AssignAge(int age){
	age = 24;
}
int AssignAge2(int age){
	age = 24;
	return age;
}
void AssignAge3(int* pAge){
	*pAge = 22;
}
void DoubleArray(int* arr, int size){
	for (int i =0; i < size; ++i){
		arr[i] = arr[i]*2;
	}
}*/
std::vector<int> Range(int start, int max,
 int step){
 	int i = start;
 	std::vector<int> range;
 	while (i <= max){
 		range.push_back(i);
 		i += step;
	 }
	 return range;
 }

