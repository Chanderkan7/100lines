#include<iostream>
using namespace std;
int main()
{
	int i = 10;
	if (i%2 == 0)
	{
		cout << "Even number!";
	}
	else
	{
		cout << "Odd!";
	}
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
	cout << "Enter student name: ";
	cin.getline(s.stuName,30);
	cout << "Enter student roll no: ";
	cin >> s.stuRollNo;
	cout << "Enter student age: ";
	cin >> s.stuAge;
	printStudentInfo(s);
	return 0;	
}
void printStudentInfo(Student s)
{
	cout << "Student Record: " << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll no: " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge;
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
	cout << "Enter student name";
	cin.getline(s.stuName, 30);
	cout << "Enter student roll no";
	cin >> s.stuRollNo;
	cout << "Enter student age";
	cin >> s.stuAge;
	return s;
}
void printStudentInfo(Student s)
{
	cout << "Student Record: " << endl;
	cout << "Name: " <<s.stuName << endl;
	cout << "Roll no: " <<s.stuRollNo << endl;
	cout << "Age" << s.stuAge << endl;
}
/*#include<iostream>
using namespace std;
enum direction
{
	East,
	West,
	North,
	South
};
int main()
{
	direction dir;
	dir = South;
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
