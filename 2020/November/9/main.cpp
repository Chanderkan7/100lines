#include<iostream>
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
	for(int i=0; i< 10; i++)
	{
		cout << i;
		cout << endl;
	}
	return 0;
}
Student getStudentInfo()
{
	Student s;
	cout << "Enter Student Name: " ;
	cin.getline(s.stuName, 30);
	cout << "Enter Student Roll No: ";
	cin >> s.stuRollNo;
	cout << "Enter Student Age: ";
	cin >> s.stuAge;
	return s;
}
void printStudentInfo(Student s)
{
	cout << "Student Record" << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll No: " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge;
}
/*#include<iostream>
using namespace std;
enum direction {
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
class Car
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
	cout << "Hello World";
	for(int i=0; i<20; i++)
	{
		cout << i << endl;
	}
}
#include<iostream>
using namespace std;
class HelloWorld
{
	public:
		HelloWorld()
		{
			cout << "Constructor is called!" << endl;
		}
		~HelloWorld()
		{
			cout << "Destructor is called" << endl;
		}
		void display()
		{
			cout << "Hello World!" << endl;
		}
};
int main()
{
	HelloWorld obj;
	obj.display();
	return 0;
}*/
