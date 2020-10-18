#include<iostream>
using namespace std;
class Sum
{
	public:
		int add(int num1, int num2)
		{
			return num1+num2;
		}
		int add(int num1, int num2, int num3)
		{
			return num1 + num2 + num3;
		}
};
int main(void)
{
	Sum obj;
	cout << obj.add(10, 20, 30) << endl;
	cout << obj.add(11, 22);
	return 0;
}
/*#include<iostream>
using namespace std;
class ParentClass
{
	public:
		int var1 = 100;
};
class ChildClass : public ParentClass
{
	public:
		int var2 = 500;
};
int main (void)
{
	ChildClass obj;
}
/*class Car
{
	char name[20];
	int speed;
	int weight;
	public:
	void brake()
	{		
	}
	void slowDown()
	{
	}		
};
int main()
{
	Car ford;
}
/*#include<iostream>
using namespace std;
struct Student
{
	char stuName[30];
	int stuRollNo;
	int stuAge;
};
Student getStudentInfo();
void printStudentInfo(Student);
int main()
{
	Student s;
	s = getStudentInfo();
	printStudentInfo(s);
	return 0;
}
Student getStudentInfo()
{
	Student s;
	cout << "Enter Student Name: ";
	cin.getline(s.stuName, 30);
	cout << "Enter Student Roll No: ";
	cin >> s.stuRollNo;
	cout << "Enter student Age: ";
	cin >> s.stuAge;
	return s;
}
void printStudentInfo(Student s)
{
	cout << "Student Record: " << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll No: " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge;
}
/*#include<iostream>
using namespace std;
enum direction 
{
	East,
	West,
	North,
	South
} dir;
int main()
{
	dir = West;
	cout << dir;
	return 0;
}
/*#include<iostream>
using namespace std;
enum direction 
{
	East = 11,
	West = 22,
	North = 33,
	South = 44
};
int main()
{
	direction dir;
	dir = South;
	cout << dir;
	return 0;
}*/
