#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;
int imGlobal = 0;
const double PI = 3.141;

int main(int argc, char** argv) {
	std::cout <<"Hellow World..." << endl;
	bool married = true;
	char myGrade = 'A';
	
	// float are accurate to 6 digits
	float f1 = 1.1111111;
	float f2 = 1.1111111;
	printf("Sum = %.7f\n", (f1 + f2));
	cout <<endl;
	// double is accurate to 16 digits
	double d1=1.1111111111111111;
	double d2=1.1111111111111111;
	printf("Sum double = %.16f",(d1 + d2));
	cout <<endl;
	cout << "Min unsigned short int: " 
	<< numeric_limits<unsigned short int>::min()
	<< endl;
	cout << "Max Unsigned short int: " <<
	numeric_limits<unsigned short int>::max()
	<<endl;
	cout <<"Min short int: " <<
	numeric_limits <short int>::min() 
	<<endl;
	cout <<"Max short int: " <<
	numeric_limits <short int>::max()
	<<endl;
	cout <<"Min int: " << 
	numeric_limits <int>::min()
	<<endl;
	cout<<"Max int: " <<
	numeric_limits <int>::max()
	<<endl;
	cout<<"Min long: " <<
	numeric_limits <long>::min()
	<<endl;
	cout<<"Max long: " <<
	numeric_limits <long>::max()
	<<endl;
	cout << "Min float: " <<
	numeric_limits<float>::min()
	<<endl;
	cout << "Max float: " <<
	numeric_limits<float>::max()
	<<endl;
	cout << "Min double: " <<
	numeric_limits<double>::min()
	<<endl;
	cout << "Max double: " << 
	numeric_limits<double>::max()
	<<endl;
	cout << "Min long double: " <<
	numeric_limits<long double>::min()
	<<endl;
	cout << "Max long double: " <<
	numeric_limits<long double>::max()
	<<endl;
//	auto whatAmI = true;
	cout << "int Bytes: " << sizeof(int) <<endl;
	printf("%c %d %5d %.3f %s \n", 'A',
	10, 5, 3.1234, "Hi" );
	string q1 = "Enter a number : ";
	int num1, num2;
	cout << q1;
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
//	int nNum1 = stoi(num1);
//	int nNum2 = stoi(num2);
	printf("%d + %d = %d\n", num1, num2, (num1 + num2)); 
	printf ("%d - %d = %d\n", num1, num2, (num1 - num2));
	printf("%d * %d = %d\n", num1, num2, (num1 * num2));
	printf("%d / %d = %d\n", num1, num2, (num1 / num2));
	printf ("%d %% %d = %d\n", num1, num2, (num1 % num2));
	int nAge;
	cout << "Enter your age: ";
	cin >> nAge;
	if ((nAge >= 1) && (nAge <=18)) {
		cout << "Important Birthday" << endl;
	} else if ((nAge == 21) || (nAge == 50)) {
		cout << "Important Birthday" << endl;
	} else if (nAge>= 65) {
		cout << "Important Birthday" << endl;
	} else {
		cout<< "Not an Important Birthday" << endl;
	}
	return 0;
}
