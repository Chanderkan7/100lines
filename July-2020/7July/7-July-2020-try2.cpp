#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <cmath>
#include <cmath>
using namespace std;

vector<int> GenerateRandVect(int numOfNums, int min, int max);
int main(int argc, char** argv)
{
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
