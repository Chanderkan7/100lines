#include<iostream>
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
	Car maruti;
	Car mercedes;
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
	cout << "Enter student name ";
	cin.getline(s.stuName, 30);
	cout << "Enter roll no: ";
	cin >> s.stuRollNo;
	cout << "Enter age: ";
	cin >> s.stuAge;
	printStudentInfo(s);
	return 0;
}
void printStudentInfo(Student s)
{
	cout << "Student Record" << endl;
	cout << "Name: " <<s.stuName << endl;
	cout << "Roll no " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge << endl;
}
/*#include<iostream>
using namespace std;
class XYZ
{
	private: 
	char ch = 'A';
	int num = 15;
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
}	
/*#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void sound () = 0;
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
		cout << "Woof" << endl;
	}
};
int main()
{
	Dog obj;
	obj.sound();
	obj.sleeping();
	return 0;
}*/
