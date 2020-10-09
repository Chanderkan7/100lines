/*#include<iostream>
using namespace std;
int main()
{
	int num = 5;
	cout << "num= " << num << endl;
	switch(num+2)
	{
		case 1:
			cout << "Case 1: Value is: " << num << endl;
		case 2:
			cout << "Case 2: Value is: " << num << endl;
		case 3:
			cout << "Case 3: Value is: " << num << endl;
		default:
			cout << "Default: Value is: "<< num << endl;
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i = 2;
	switch(i)
	{
		case 1:
			cout << "Case 1" << endl;
		case 2:
			cout << "Case 2" << endl;
		case 3:
			cout << "Case 3" << endl;
		case 4:
			cout << "Case 4" << endl;
			break;
		default:
			cout << "Default " << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	char ch = 'b';
	switch(ch)
	{
		case 'd' : cout << "Case 1";
		break;
		case 'b' :cout << "Case 2";
		break;
		case 'x':
			cout << "Case 3";
		break;
		case 'y':
			cout << "Case 4";
		break;
		default: 
		cout << "Default";
	}
	return 0;
}*/
#include<iostream>
using namespace std;
class BaseClass
{
	public:
		void disp()
		{
			cout << "Functoin of Parent Class";
		}
};
class DerivedClass : public BaseClass
{
	public:
		void disp()
		{
			cout << "Function of child class";
		}
};
int main()
{
	BaseClass obj = DerivedClass();
	obj.disp();
	DerivedClass obj2;
	cout << endl;
	cout << endl;
	obj2.disp();
	int i;
	cout << "Number : ";
	cin >> i;
	if(i%2 == 0)
	{
		cout << "Number is even";
	}
	else
	{
		cout << "Number is odd";
	}
	return 0;
}









