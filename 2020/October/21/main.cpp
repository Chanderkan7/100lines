#include<iostream>
#include<cmath>
using namespace std;
void square(int arr[2][3])
{
	int temp;
	for(int i = 0; i<2; i++)
	{
		for(int j=0; j<3 ; j++)
		{
			temp = arr[i][j];
			cout<< pow(temp, 2) << endl;
		}
	}
}
int main()
{
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6}	};
	square(arr);
	cout << "Hello!";
	cout << "World!";
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int arr[2][3][4] = {
	{{1,-1}, {2, -2}, {3, -3}},
	{{4, -4}, {5, -5}, {6, -6}	}
	};
	for (int x = 0; x< 2; x++)
	{
		for (int y = 0; y< 3; y++)
		{
			for(int z = 0; z < 2; z++)
			{
				cout << arr[x][y][z] << " ";
			}
		}
	}
}
/*#include<iostream>
using namespace std;
int main()
{
	int arr[] = {11, 22, 33, 44};
	int n = 0;
	while(n<=4)
	{
		cout << arr[n] << endl;
		n++;
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
		return 1;
	else
		return n*fb(n-1);
}
int fb(int n)
{
	if(n <=1 )
		return 1;
	else
		return n*fa(n-1);
}
int main()
{
	int num = 5;
	cout << fa(num);
	return 0;
}
/*#include<iostream>
using namespace std;
int f(int n)
{
	if (n <=1)
	{
		return 1;
	}
	else
	{
		return n*f(n-1);
	}
}
int main()
{
	int num;
	cout << "Enter a number ";
	cin >> num;
	cout << "Factorial of entered number: " << f(num);
	return 0;
}*/
