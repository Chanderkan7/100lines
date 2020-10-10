/*#include<iostream>
using namespace std;
int main()
{
	int num = 5;
	switch(num+2)
	{
		case 1:
			cout << "Case 1: Case value is: " << num << endl;
		case 2:	
			cout << "Case 2: Case value is: " << num << endl;
		case 3:
			cout << "Case 3: Case value is: " << num << endl;
		default:
			cout << "Default value is: " << num << endl;
	}
	return 0;
}
#include<iostream>
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
		default:
			cout << "Default" << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int i = 2;
	switch(i)
	{
		case 1:
			cout <<"Case 1: " << endl;
			break;
		case 2:
			cout <<"Case 2: "<< endl;
			break;
		case 3:
			cout <<"Case 3:" << endl;
		case 4:
			cout << "Case 4:" << endl;
		default:
			cout << "Default"<< endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	for (int i =0; i<6;i++)
	{
		cout << "Value of i is: " << i << endl;
	}
return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int arr[] = {21, 9, 56, 99, 323};
	for (int i =0; i < 5; i++)
	{
		cout << "Value of i is: " << i << endl;
	}
	return 0;
}*/
#include<iostream>
using namespace std;
class Parent
{
	public:
		Parent()
		{
			cout << "I am Parent!" << endl;
		}
};
class Child : public Parent
{
	public:
		Child()
		{
			cout << "I am Child!" << endl;
		}
};
int main()
{
	Parent obj;
	Child obj1;
}





