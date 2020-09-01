#include<iostream>
using namespace std;
int main()
{
	cout << "This is a good program!\n";
	int n;
	cout << "Enter the number: ";
	cin >> n;
	if( n % 2 == 0)
	{
		cout << "Number is even!";
	}
	else 
	cout << "Number is odd!";
	for (int i = 0; i < n; i++)
	{
		cout << "Looping...!! " << i << endl;
	}
}
/*#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
	ofstream file1("file1.txt");
	file1 << "This is the string to be inserted. \n";
	string str1;
	cout << "Enter the string: ";
	getline(cin, str1);
	file1 << str1;
	file1.close(); 
	ifstream file1("file1.txt");
	string str1;
	getline(file1, str1);
	cout << str1;
	file1.close();
}
/*#include<iostream>
using namespace std;
int binarySearch(int arr[], int p, int r, int num)
{
	if(p <= r)
	{
		int mid = (p+r)/2;
		if(arr[mid] == num)
		return mid;
		if(arr[mid] > num)
		return binarySearch(arr, p, mid-1, num);
		if(arr[mid] > num)
		return binarySearch(arr, mid+1, r, num);
	}
	return -1;
}
int main(void)
{
	int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	int num;
	cout << "Enter the number to search: ";
	cin >> num;
	int index = binarySearch(arr, 0, n-1, num);
	if(index == -1)
	cout << num << " is not present in array. ";
	else
	cout << num << " is present at " << index << " in the array";
	return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
	int arr[10], count;
	cout << "Number of elements to enter (Max 10) :  ";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "Enter the " << i  << " element: ";
		cin >> arr[i];	
	}
	cout << "Array is: " << "{";
	for (int j = 0; j < count; j++)
		if (j == count-1)
		cout << arr[j];
		else
		cout << arr[j] << ", ";
	cout << "}";
	int LinSearchEle;
	bool found = true;
	cout << "Enter the element you want to search: ";
	cin >> LinSearchEle;
	for (int k = 0; k < count ; k++)
	{
		if (arr[k] == LinSearchEle)
		{
			cout << "Found " << LinSearchEle << " at index " << k << " .";
			return 0; 
		}
	}
	cout << "Element not found ";
}*/
