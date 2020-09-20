/*#include<iostream>
using namespace std;
int main()
{
	int arr[2][3][2] = {
	{ {1,-1}, {2,-2}, {3,-3}},
	{ {4, -4}, {5, -5}, {6, -6}}
	};
	for(int x = 0; x<2; x++)
	{
		for(int y=0; y<2; y++)
		{ 
			for (int z=0; z < 2; z++)
			{
				cout << arr[x][y][z] << " ";
			}
		}
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int arr[2][3] = { {11, 22, 33}, {44, 55, 66}};
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j <3; j++)
		{
			cout << "arr[" << i << "][" << j << "]: "<< arr[i][j]<< endl;
		}
	}
	return 0;
}
#include<iostream>
using namespace std;
class XYZ
{
	private:
		int num = 100;
		char ch = 'Z';
	public:
		friend void disp(XYZ obj);
};
void disp(XYZ obj)
{
	cout << obj.num << endl;
	cout << obj.ch << endl;
}
int main()
{
	XYZ obj;
	disp(obj);
	return 0;
}
#include<iostream>
using namespace std;
class XYZ
{
	private:
		char ch = 'A';
		int num = 11;
	public:
		friend class ABC;
};
class ABC
{
	public:
		void disp(XYZ obj)
		{
			cout << obj.ch << endl;
			cout << obj.num << endl;
		}
};
int main()
{
	ABC obj;
	XYZ obj2;
	obj.disp(obj2);
	return 0;
}*/
#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void sound() = 0;
		void sleeping()
		{
			cout << "Sleeping";
		}		
};
class Dog: public Animal
{
	public:
		void sound()
		{
			cout << "Woof " << endl;
		}
};
int main()
{
	Dog obj;
	obj.sound();
	obj.sleeping();
}





