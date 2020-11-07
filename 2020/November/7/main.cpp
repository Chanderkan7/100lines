#include<iostream>
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
	cout << "Enter student name ";
	cin.getline(s.stuName, 30);
	cout << "Enter student roll no: ";
	cin >> s.stuRollNo;
	cout << "Enter student age ";
	cin >> s.stuAge;
	printStudentInfo(s);
	return 0;
}
void printStudentInfo(Student s)
{
	cout << "Student Record: " << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll No " << s.stuRollNo << endl;
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
int main()
{
	Student s;
	cout << "Enter Student Name: ";
	cin.getline(s.stuName, 30);
	cout << "Enter Student Roll No: ";
	cin >> s.stuRollNo;
	cout << "Enter Sudent Age: ";
	cin >> s.stuAge;
	cout << "Student Record: " << endl;
	cout << "Name " << s.stuName << endl;
	cout << "Roll No " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge;
	return 0;
}
/*#include<iostream>
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
		    return num1+num2+num3;	
	    }
};
int main(void)
{
	Sum obj;
	cout << obj.add(10,50,30)<<endl;
	cout << obj.add(32,45)<< endl;
	return 0;
}
/*#include<iostream>
using namespace std;
class ParentClass
{
	public:
		int var1=100;
};
class ChildClass: public ParentClass
{
	public:
		int var2 = 500;
};
int main(void)
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
}*/
