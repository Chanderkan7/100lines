#include<iostream>
using namespace std;
int main()
{
	int i =2;
	switch(i)
	{
		case 1:
			cout << "Case 1";
			break;
		case 2:
			cout << "Case 2";
			break;
		case 3:
			cout << "Case 3";
			break;
		default:
			cout << "Default";
	}
	for ( int i = 0; i < 10 ; i++)
	{
		if (i%2 == 0)
		{
			cout << i << " is even" << endl;
		}
		else
		{
			cout << i << " is odd" << endl;
		}
	}
	for (int i=0; i<30 ; i++)
	{
		if(i%3==0)
		{
			cout << i << endl;
		}
	}
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
	cout << "Enter Student Roll No ";
	cin>>s.stuRollNo;
	cout << "Enter student Age: ";
	cin >> s.stuAge;
	printStudentInfo(s);
	return(0);
}
void printStudentInfo(Student s)
{
	cout << "Sudent Record" << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll No: " << s.stuRollNo << endl;
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
	cout << "Enter Student Name";
	cin.getline(s.stuName, 30);
	cout << "Enter Student Roll No ";
	cin >> s.stuRollNo;
	cout << "Enter Student Age";
	cin >> s.stuAge;
	return s;
};
void printStudentInfo(Student s)
{
	cout  << "Student Record " << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll No " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge;
}*/
