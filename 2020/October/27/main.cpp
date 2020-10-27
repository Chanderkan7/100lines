#include<iostream>
using namespace std;
enum direction
{
	East,
	West,
	North,
	South
}dir;
int main()
{
	dir = West;
	cout << dir;
	return 0;
}
/*#include<iostream>
using namespace std;
struct Student
{
	char stuName[30];
	int stuRollNo;
	int stuAge;
};
void printStudentInfo(Student);
int main()
{
	Student s;
	cout << "Enter Student Name: ";
	cin.getline(s.stuName, 30);
	cout << "Enter Student Roll No: ";
	cin >> s.stuRollNo;
	cout << "Enter Sudent Age: ";
	cin >> s.stuAge;
	printStudentInfo(s);
	return 0;
}
void printStudentInfo(Student s)
{
	cout << "Student Record: " << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll No: " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge << endl;
}
/*#include<iostream>
#include<cmath>
using namespace std;
void square(int arr[2][3])
{
	int temp;
	for(int i=0; i<2; i++)
		{
			for(int j=0; i<3; i++)
			{
				temp = arr[i][j];
				cout << pow(temp, 2) << endl;
			}
		}
}
int main()
{
	int arr[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
	};
	square(arr);
	return 0;
}
/*#include<iostream>
using namespace std;
int fa(int);
int fb(int);
int fa(int n)
{
	if(n <1)
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
	int num = 5;
	cout << fa(num);
	return 0;
}
/*#include<iostream>
using namespace std;
int sum(int a, int b=0, int c=20);
int main()
{
	cout << " sum(1) -- " << sum(1) << endl;
	cout << " sum(1, 2) -- " << sum(1,2) << sum(1, 2) << endl;
	cout << " sum(1, 2, 3) -- " << sum (1, 2, 3) << endl;
}
int sum(int a, int b, int c)
{
	int z;
	z = a + b + c;
	return z;
}*/
