#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout << "Class A Constructor!" << endl;
	}		
};
class B: public A
{
	B()
	{
		cout << "Class B Constructor!" << endl;
	}
};
class C:public A
{
	public:
	C()
	{
		cout << "Class C Constructor" << endl;
	}
};
int main()
{
	C obj;
	return 0;
}
/*#include <iostream>

using namespace std;
class A
{
	public:
		A()
		{
			cout << "Constructor of class A" << endl;
		}
};
class B: public A
{
	public:
	B()
	{
		cout << "constructor of class B" << endl;
	}	
};
class C: public B
{
	public:
	C()
	{
		cout << "Constructor of class C" << endl;
	}	
};
int main()
{
	C obj;
	return 0;
}
/*#include <iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout << "Constructor A of class " << endl;
		}
};
class B: public A
{
	public:
	B()
	{
		cout << "Constructor of B class";	
	}	
};
int main()
{
	B obj;
	return 0;
}
/*#include <iostream>
using namespace std;
class Teacher
{
	public:
	Teacher()
	{
		cout << "I am a Teacher!\n";
	}
	string collegeName = "100Lines";
};
class MathTeacher: public Teacher
{
	public:
	MathTeacher()
	{
		cout << "I am a math Teacher\n";	
	}	
	string mainSub = "Math";
	string name = "Negan";
};
int main()
{
	MathTeacher obj;
	cout << "Name: " << obj.name << endl;
	cout << "College Name: " << obj.collegeName << endl;
	cout << "Main Subject: " << obj.mainSub << endl;
	return 0;
}
/*#include <iostream>
using namespace std;
enum direction 
{ 
	East = 11,
	West = 22,
	North = 33,
	South = 44,
};
int main()
{
	direction dir;
	dir = South;
	cout << dir;
	return 0;
}*/
