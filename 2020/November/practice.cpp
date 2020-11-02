//Class name is Car
class Car
{
    //Data members
    char name[20];
    int speed;
    int weight;
 
public:
    //Functions
    void brake(){
    }
    void slowDown(){
    }
};
int main()
{
   //ford is an object
   Car ford; 
}
===========================
#include <iostream>
using namespace std;
class ParentClass {
  //data member
  public:
    int var1 =100;
};
class ChildClass: public ParentClass {
  public:
  int var2 = 500;
};
int main(void) {
  ChildClass obj;
}
===============================
#include <iostream>
using namespace std;
class Sum {
  public:
    int add(int num1,int num2){
      return num1 + num2;
    }
    int add(int num1, int num2, int num3){
      return num1 + num2 + num3;
    }
};
int main(void) {
   //Object of class Sum
   Sum obj;

   //This will call the second add function
   cout<<obj.add(10, 20, 30)<<endl;

   //This will call the first add function
   cout<<obj.add(11, 22);
   return 0;
}
===================================
#include <iostream>
using namespace std;
class constructorDemo{
public:
   int num;
   char ch;
   constructorDemo() {
      num = 100; ch = 'A';
   }
};
int main(){
   constructorDemo obj;
   cout<<"num: "<<obj.num<<endl;
   cout<<"ch: "<<obj.ch;
   return 0;
}
=======================================
#include <iostream>
using namespace std;
class Website{
public:
   //Default constructor
   Website() {
      cout<<"Welcome to BeginnersBook"<<endl;
   }
};
int main(void){
   Website obj1;
   Website obj2;
   return 0;
}
========================================
#include <iostream>
using namespace std;
class Add{
public:
   Add(int num1, int num2) {
     cout<<(num1+num2)<<endl;
   }
};
int main(void){
   Add obj1(10, 20);
   Add obj2 = Add(50, 60);
   return 0;
}
===========================================
#include <iostream>
using namespace std;
class HelloWorld{
public:
  //Constructor
  HelloWorld(){
    cout<<"Constructor is called"<<endl;
  }
  //Destructor
  ~HelloWorld(){
    cout<<"Destructor is called"<<endl;
   }
   //Member function
   void display(){
     cout<<"Hello World!"<<endl;
   }
};
int main(){
   //Object created
   HelloWorld obj;
   //Member function called
   obj.display();
   return 0;
}
=========================================
#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
int main(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"ENter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
   return 0;
}
===========================================
#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
void printStudentInfo(Student);
int main(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"Enter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   printStudentInfo(s);
   return 0;
}
void printStudentInfo(Student s){
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
}
=========================================
#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
Student getStudentInfo();
void printStudentInfo(Student);
int main(){
   Student s;
   s = getStudentInfo();
   printStudentInfo(s);
   return 0;
}
/* This function prompt the user to input student
 * details, stores them in structure members
 * and returns the structure
 */
Student getStudentInfo(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"Enter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   return s;
}
void printStudentInfo(Student s){
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
}
=========================
#include<iostream>
using namespace std;
enum direction {East, West, North, South}dir;
int main()
{
   dir = West;
   cout<<dir;
   return 0;
}
==========================
#include <iostream>
using namespace std;
enum direction {East, West, North, South};
int main(){
   direction dir;
   dir = South; 
   cout<<dir;   
   return 0;
}
=========================
#include <iostream>
using namespace std;
enum direction {East=11, West=22, North=33, South=44};
int main(){
   direction dir;
   dir = South;
   cout<<dir; 
   return 0;
}