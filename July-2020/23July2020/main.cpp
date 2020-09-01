#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class MyClass{
	public:
		int x;
	private: 
		int y;
	protected:
		int z;
};
void MyFunction(string fname){
	cout << fname << " References\n";
}
int MySum(int x, int y){
	return x + y;
}
void Unknown(int *p, int num);
void HardToFollow(int *p, int q, int *num);
void Unknown(int *p, int num){
	int *q;
	q = &num;
	*p = *q+2;
	num =7;
}
void HardToFollow(int *p, int q, int *num){
	*p = q + *num;
	*num = q;
	num = p;
	p = &q;
	Unknown(num, *p);
}
int main() {
	cout << "Hello world!\n";
	int *q;
	int trouble[3];
	trouble[0]=1;
	q = &trouble[1];
	*q = 2;
	trouble[2] = 3;
	HardToFollow(q, trouble[0], &trouble[2]);
	Unknown(&trouble[0], *q);
	/*cout << MySum(123,456)<<"\n";
	MyFunction("Liam");
	MyFunction("Jenny");
	MyFunction("Ajna");
	cout << "I am learning C++\n";
	cout << "This is an experiment with endl" << endl;
	const int myConst = 15;
	//myConst = 10;
	cout << myConst << endl;
	cout <<"Value of myConst is " << myConst << endl;
	int x = 4;
	int y = 6;
	int sum = x + y;
	cout << "x + y = " << sum << endl;
	int a = 12, b = 14, c = 78;
	cout <<"a + b + c = " << a + b + c << endl;
	string fullName;
	cout << "Enter your name: " ;
	//cin >> fullName;
	cout <<"Hi " << fullName <<"!\n";
	cout << sqrt(64) << "\n";
	cout << round(2.6) <<"\n";
	cout << log(2) << "\n";
	int a1 = 100;
	int b1= 20;
	cout <<(a1>b1)<<"\n";
	MyClass myObj;
	myObj.x = 25;
//	myObj.y = 50;
	int day = 6;
	switch (day){
		case 6:
			cout << "Today is Saturday\n";
			break;
		case 7:
			cout <<"Today is Sunday\n";
			break;
		default:
			cout <<"Looking forward to Weekend!\n";
	}*/
	int x = 100;
	int y = 200;
	if (x > y){
		cout << x;
	}else {
		cout <<y;
	}
	cout<<"Hello World1";
	cout <<"Hello World2";
	cout <<"Hello World3";
	cout <<"Hello World4";
	cout <<"Hello World5";
	cout <<"Hello World6";
	cout <<"Hello World7";	
	cout <<"Hello World8";
	return 0;
	}
