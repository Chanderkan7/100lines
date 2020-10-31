#include<iostream>
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
	return 0;
}
int main()
{
	int num=5;
	cout << fa(num);
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int num = 2;
	switch(num)
	{
		case 1:
		cout << "case 1" << endl;
	case 2:
		cout << "case 2" << endl;
	case 3:
		cout << "case 3" << endl;
	case 4:
		cout << "case 4" << endl;
	default:
		cout << "Default" <<endl;
	}
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	char ch = 'b';
	switch(ch)
	{
		case 'd':
			cout << "Case 1";
			break;
		case 'b':
			cout << "Case 2";
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
}
/*#include<iostream>
using namespace std;
int main()
{
	int num = 5;
	switch(num+2)
	{
		case 1:
			cout << "Case 1: Value is: " << num << endl;
		case 2:
			cout << "Case 2: Value is: " << num << endl;
		case 3:
			cout << "Case 3: Value is: " << num << endl;
		default:
			cout << "Default : Value is: " << num << endl;
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
			cout << "Case 1: Value is: " << num << endl;
		case 2:
			cout << "Case 2: Value is: " << num << endl;
		case 3:
			cout << "Case 3: Value is: " << num << endl;
		default:
			cout << "Default: Value is: " << num << endl;
	}
	return 0;	
}*/
