/*#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; i++ )
	{
		cout << "Value of variable i is: " << i << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int arr[] = {21, 9, 56, 202};
	for(int i=0; i<5; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	while (i < 6) 
	{
		cout << "Value is: " << i << endl;
		i++;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int arr[] = {21, 87, 15, 99, 12};
	int i = 0;
	while(i<5)
	{
		cout << " " << arr[i];
		i++;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int arr[] = {21, 99, 15, 109};
	int i = 0;
	do
	{
		cout << arr[i] << endl;
		i++;
	}
	while(i<4);
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int j = 6;
	while(j >= 0)
	{
		if (j==4)
		{
			j--;
			continue;
		}
		cout << "Value of j: " << j << endl;
		j--;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int j = 4;
	do
	{
		if(j == 7)
		{
			j++;
			continue;
		}
		cout << "j is: " << j << endl;
		j++;		
	}while(j <10);
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int num = 10;
	while(num <= 200)
	{
		cout << "Value of num is: " << num << endl;
		if (num == 12)
		{
			break;
		}
		num++;
	}
	cout << "Hey, I'm out of the loop...";
}








