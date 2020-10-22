#include<iostream>
using namespace std;
class BaseClass
{
	public:
		void disp()
		{
			cout << "Parent Class!";
		}
		BaseClass()
		{
			cout << "BaseClass Constructor";
			
		}
};
class DerivedClass : public BaseClass
{
	public:
		void disp()
		{
			cout << "Child Class!";
		}
		DerivedClass()
		{
			cout << "DerivedClass constructor";
		}
};
int main()
{
	/*cout << "Hellow!" << endl;
	BaseClass obj;
	cout << endl;
	DerivedClass obj2;
	cout << endl;
	obj.disp();
	cout << endl;
	obj2.disp();
	BaseClass obj = DerivedClass();
	obj.disp();
	DerivedClass obj2;
	cout << "\n";
	obj2.disp();
	cout << endl;
	return 0;*/
	for (int i = 0; i < 50 ; i++)
	{
		if (i %2 == 0)
		{
			cout << i << endl;
		}
		else 
		{
			cout << "*\n";
		}
	}
	return 0;
}
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	bool swap_check = true;
	cout << "Enter the amount numbers to sort: " ;
	cin >> n ;
	vector<int> numbers;
	cout << "Enter " << n << " numbers.";
	int num;
	for(int i =0; i < n; i++)
	{
		cin >> num;
		numbers.push_back(num);
	}
	for(int i =0; (i <n) && (swap_check); i++)
	{
		swap_check = false;
		for (int j = 0; j < n-1; j++)
		{
			if(numbers[j] > numbers[j+1])
			{
				swap_check = true;
				swap(numbers[j], numbers[j+1]);
			}
		}
	}
	cout << "Sorted array: ";
	for(int i = 0; i < numbers.size();i++)
	{
		if(i !=numbers.size() -1 )
		{
			cout << numbers[i] << ", " ;
		}
		else
		{
			cout << numbers[i] << endl;
		}
	}
	return 0;
}*/
