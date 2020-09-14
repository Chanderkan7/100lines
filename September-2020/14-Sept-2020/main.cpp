#include <iostream>
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
	cout << "Enter Student Rollno: ";
	cin>>s.stuRollNo;
	cout << "Enter Student Age: ";
	cin >> s.stuAge;
	printStudentInfo(s);
	return 0;
}
void printStudentInfo(Student s)
{
	cout << "Student Record: " << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll No: "<< s.stuRollNo << endl;
	cout << "Age: " << s.stuAge << endl;;
}
/*#include<iostream>
using namespace std;
struct Student
{
	char stuName[30];
	int stuRollNo;
	int stuAge;
};
int main()
{
	Student s;
	cout << "Enter Student Name: ";
	cin.getline(s.stuName, 30);
	cout << "Enter Student Roll No: ";
	cin >> s.stuRollNo;
	cout << "Enter Student Age: ";
	cin >> s.stuAge;
	cout << "Student Record: "<<endl;
	cout << "Name: "<< s.stuName << endl;
	cout << "Roll No: "<<s.stuRollNo << endl;
	cout << "Age: " << s.stuAge;
}
/*#include<iostream>
using namespace std;
class HelloWorld
{
	public:
	HelloWorld()
	{
		cout << "Constructor is called upon object creation!" << endl;
	}
	~HelloWorld()
	{
		cout << "\nDeconstructor is called!" << endl;
	}
	void display()
	{
		cout << "Hello World";
	}
};
int main()
{
	HelloWorld obj;
	obj.display();
	return 0;
}
/*#include<iostream>
using namespace std;
class Add
{
	public:
		Add(int num1, int num2)
		{
			cout << (num1 + num2) << endl;
		}
};
int main()
{
	Add obj(10, 20);
	Add obj2 = Add(50,60);
}
/*
// Constructor is called "automatically"
//Whatever is inside default constructor, happens.
#include<iostream>
using namespace std;
class Website
{
	public:
		Website()
		{
			cout << "cout from constructor\n";
		}
};
int main(void)
{
	Website obj1;
	Website obj2;
	return 0;
}*/
