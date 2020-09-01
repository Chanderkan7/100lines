#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <functional>
//std::vector<int> GenerateRandVec(int numOfNums, int min, int max);
std::vector<int> GenerateFibList(int maxNums);
int main(int argc, char** argv) {
	std::cout << "***** 18 July 2020 *********\n";
//	std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
	std::vector<int> listOfFibs = GenerateFibList(10);
	for (auto val:listOfFibs)
		std::cout<< val <<  "\n";
		std::cout<<"Today learnt about Lambda expressions...";
		std::cout<<"\nAlso used the for(auto) expression\n";
		std::cout<<"Derek Banas is an amazing tutor...\n";
		std::cout<<"Tomorrow we will cover the OOPs.. \n";
		std::cout<<"Practice makes a person perfect...\n";
		std::cout<<"Hope to make it big! \n";
		std::cout<<"This big, start small....\n";
		/*std::function<int(int)> Fib = 
	[&Fib] (int n) {return n < 2 ? n 
	: Fib(n - 1) + Fib(n - 2);};
	std::cout << "Fib 4: " << Fib(4) << "\n";
	int age = 43;
	bool canIVote = (age >= 18) ? true : false;
	std::cout<<"Can Derek Vote? " << canIVote << "\n";
	std::cout.setf(std::ios::boolalpha);
	std::cout<<"Can Derek Vote? " << canIVote << "\n";
	std::vector<int> vec1 = {1, 2, 3, 4, 5};
	std::vector<int> vec2 = {1, 2, 3, 4, 5};
	std::vector<int> vec3(5);
	transform(vec1.begin(), vec1.end(), 
	vec2.begin(), vec3.begin(),
	[](int x, int y) { return x + y	;});
	for (auto val:vec3)
		std::cout<<val<<"\n";
	std::vector<int> doubleVec;
	std::for_each(vecVals.begin(), vecVals.end(),
	[&](int x){doubleVec.push_back(x * 2);});
	for (auto val:doubleVec)
	std::cout << val << "\n";
	int divisor;
	std::vector<int> vecVals2;
	std::cout << "List of Values Divisible by: ";
	std::cin >> divisor;
	std::copy_if(vecVals.begin(), vecVals.end(),
	std::back_inserter(vecVals2), 
	[divisor](int x){return (x % divisor) == 0;});
	for (auto val:vecVals2)
		std::cout << val << " ";
	std::cout << "\n";
	for (auto val:vecVals)
		std::cout << val << " ";
		std::cout<< "\n";
		std::vector<int> evenVecVals;
		std::copy_if(vecVals.begin(), vecVals.end(),
		std::back_inserter(evenVecVals), 
		[] (int x){ return (x%2) == 0;});
	std::sort(vecVals.begin(), vecVals.end(), 
	[](int x, int y){return x < y;});
	for (auto val:vecVals)
		std::cout << val << " ";
		std::cout<< "\n";
	std::cout<<"Copying even values to new vector...\n";
	for (auto val:evenVecVals)
	std::cout << val << " ";
	int sum = 0;
	std::for_each(vecVals.begin(), vecVals.end(),
	[&](int x) {sum +=x;});
	std::cout << "\nSum " << sum << "\n";*/
	return 0;
}
std::vector<int> GenerateFibList(int maxNums){
	std::vector<int> listOfFibs;
	int i = 0;
	std::function<int(int)> Fib = 
	[&Fib](int n) {return n < 2 ? n :
	Fib(n - 1) + Fib(n - 2);};
	while(i < maxNums){
		listOfFibs.push_back(Fib(i));
		i++;
	}
	return listOfFibs;
}
/*std::vector<int> GenerateRandVec(int numOfNums, int min, int max){
	std::vector<int> vecValues;
	srand(time(NULL));
	int i = 0, randVal = 0;
	while (i < numOfNums){
		randVal = min + std::rand() % ((max+1) - min);
		vecValues.push_back(randVal);
		i++;
	}
	return vecValues;
}*/
