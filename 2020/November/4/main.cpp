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
	cout << "Enter Student Name ";
	cin.getline(s.stuName, 30);
	cout << "Enter Student Roll No: ";
	cin >> s.stuRollNo;
	cout << "Enter student age: ";
	cin >> s.stuAge;
	printStudentInfo(s);
	int salary;
	cout << "Hello World";
	cout << "How are you...";
	cout << "\nEnter salary: ";
	cin >> salary;
	
	for (int i =0 ; i <= 60 ; i=i+5)
	{
		cout << salary + (salary*i/100) << " is " << i << "%" << endl;
	}
	return 0;
}
void printStudentInfo(Student s)
{
	cout << "Student Record " << endl;
	cout << "Name " << s.stuName << endl;
	cout << "Roll No " << s.stuRollNo << endl;
	cout << "Age " << s.stuAge;
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
	cout << "Enter student name: ";
	cin.getline(s.stuName, 30);
	cout << "Enter student roll no ";
	cin>>s.stuRollNo;
	cout << "Enter student age ";
	cin>>s.stuAge;
	cout << "Student record " << endl;
	cout << "Name : " <<s.stuName<< endl;
	cout << "Roll no: " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge << endl;
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
	cout << obj.add(10,20,30) << endl;
	cout << obj.add(123,3213);
	return 0;
}
/*#include<iostream>
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
	Car ford;
}*/
