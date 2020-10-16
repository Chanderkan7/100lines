/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout << "Enter a String: ";
	getline(cin, str);
	cout << "You entered...";
	cout << str << endl;
	str.push_back('A');
	cout << "The string after push_back: " << str << endl;
	//str.pop_back();
	cout << "The string after pop_back: " << str << endl;
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
void square(int arr[2][3])
{
	int temp;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			temp = arr[i][j];
			cout << pow(temp, 2) << endl;
		}
	}
}
int main()
{
	int arr[2][3] = 
	{
		{1, 2, 3},
		{4, 5, 6}
	};
	square(arr);
}
#include<iostream>
using namespace std;
int main()
{
	char book[50];
	cout << "Enter your book name: ";
	cin.get(book, 50);
	cout << "You entered: " << book;
	return 0;
}
#include<iostream>
using namespace std;
int fa(int);
int fb(int);
int fa(int n)
{
	if(n <= 1)
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
#include<iostream>
using namespace std;
int f(int n)
{
	if(n <= 1)
		return 1;
	else
	{
		return n*f(n-1);	
	}	
}
int main()
{
	int num;
	cout << "Enter a num";
	cin >> num;
	cout << "Factorial is: " << f(num);
	return 0;
}






