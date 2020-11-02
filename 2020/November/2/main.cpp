#include<iostream>
using namespace std;
class BaseClass
{
	public:
		void disp()
		{
			cout << "Function of Parent Class";
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
	obj2.disp();
	cout << endl;
	cout << "End";
	cout << "Of statement";
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int i=2;
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
		default:
			cout << "Default" << endl;
	}
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int num=5;
	switch(num+2)
	{
		case 1:
			cout << "Case1: Value is " << num << endl;
		case 2:
			cout << "Case2: Value is " << num << endl;
		case 3:
			cout << "Case3: Value is " << num << endl;
		default:
			cout << "Default Value is " << num << endl;	
	}
	return 0;
}
/*#include<iostream>
using namespace std;
int fa(int);
int fb(int);
int fa(int n)
{
	if(n<=1)
	{
		return 1;	
	}	
	else
	{
		return n*fb(n-1);
	}
}
int fb(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fa(n-1);
	}
}
int main()
{
	int num=5;
	cout << fa(num);
	return 0;
}*/
