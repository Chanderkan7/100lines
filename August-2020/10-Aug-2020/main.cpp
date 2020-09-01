#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
using namespace std;
class hotel
{
	int room_no;
	char name[30];
	char address[50];
	char phone[10];
	public:
		void main_menu();
		void add();
		void display();
		void rooms();
		void edit();
		int check(int);
		void modify(int);
		void delete_rc(int);
};
void hotel::main_menu()
{
int choice;
	while(choice!=5)
	{
		cout << "\n\t----------------------------------";
		cout << "\n\t MAIN MENU ";
		cout << "\n\t----------------------------------";
		cout << "\n\t1.Book A Room";
		cout << "\n\t2.Customer Record";
		cout << "\n\t3.Rooms Allotted";
		cout << "\n\t4.Edit Record";
		cout << "\n\t5.Exit";
		cout << "\n\tEnter your choice";
		cin >> choice;
		switch (choice)
		{
			case 1: add(); break;
			case 2: display(); break;
			case 3: rooms(); break;
			case 4: edit(); break;
			case 5: break; 
			default:
			    {
			    	cout << "\nInvalid choice...!";
			    	cout << "\nPress any key to continue.";
			    	getch();
				}
		}
	}
}
void hotel::add()
{
	int r, flag;
	ofstream fout("Record.dat", ios::app);
	cout << "\nEnter Customer Details";
	cout << "\n-----------------------";
	cout << "\n\n Room No: ";
	cin >> r;
	flag=check(r);
	if(flag)
	cout << "\nSorry...! Room is already booked.";
	else
	{
		room_no = r;
		cout << "Name: ";
		gets(name);
		cout << "Address: ";
		gets(address);
		cout << "Phone no: ";
		gets(phone);
		fout.write((char*)this, sizeof(hotel));
		cout <<"\nRoom is booked...!";
	}
	cout << "\nPress any key to continue...!";
	getch();
	fout.close();
}
void hotel::display()
{
	ifstream fin("Record.dat", ios::in);
	int r, flag;
	cout << "\nEnter the room no: ";
	cin >> r;
	while (!fin.eof())
	{
		fin.read((char*)this, sizeof(hotel));
		if(room_no==r)
		{
			cout << "\nCustomer Details";
			cout << "\n-----------------";
			cout << "\n\nRoom no: "<< room_no;
			cout << "\nName: " << name;
			cout << "\nAddress: " << address;
			cout << "\nPh no: " << phone;
			flag = 1;
			break;
		}
	}
	if(flag==0)
	cout <<"\nSorry! Room not found or not vacant! ";
	cout << "\n\n Press any key to continue. ";
	getch();
	fin.close();
}
void hotel::rooms()
{
	ifstream fin("Record.dat", ios::in);
	cout << "\n\n\t List of Rooms Allocated";
	cout << "\n\t\t\t -----------------------";
	cout << "\n\nRoom No. \t Address \t\t\t Phone No.\n";
	while (!fin.eof())
	{
		fin.read((char*)this, sizeof(hotel));
		cout << "\n\n "<< room_no<<"\t\t"<<name;
		cout << "\t\t " << address<<"\t\t"<<phone;
	}
	cout << "\n\n\n\t\tPress any key to continue...!";
	getch();
	fin.close();
}
void hotel::edit()
{
	int choice, r;
	cout << "\nEDIT MENU";
	cout << "\n-----------";
	cout << "\n\n1. Modify Customer Record";
	cout << "\n 2. Delete Customer Record";
	cout << "\n Enter your choice";
	cin >> r;
	switch(choice)
	{
		case 1: modify(r); break;
		case 2: delete_rc(r); break;
		default: cout << "\n Wrong Choice...!";
	}
	cout <<"\n Press any key to continue. ";
	getch();
}
int hotel::check(int r)
{
	int flag=0;
	ifstream fin("Record.dat", ios::in);
	while(!fin.eof())
	{
		fin.read((char*)this, sizeof(hotel));
		if(room_no==r)
		{
			flag = 1;
			break;
		}
	}
	fin.close();
	return(flag);
}
void hotel::modify(int r)
{
	long pos, flag=0;
	fstream file("Record.dat", ios::in|ios::out|ios::binary);
	while(!file.eof())
	{
		pos = file.tellg();
		file.read((char*)this, sizeof(hotel));
		if(room_no == r)
		{
			cout << "Enter New Details ";
			cout << "\n------------------";
			cout << "\n Name: ";
			gets(name);
			cout << "\n Address: ";
			gets(address);
			cout << "Phone no: ";
			gets(phone);
			file.seekg(pos);
			file.write((char*)this, sizeof(hotel));
			cout << "\n Record is modified! ";
			flag = 1;
			break;
		}
	}
	if (flag = 0)
	cout << "Sorry room no. not found or vacant...!";
	file.close();
}
void hotel::delete_rc(int r)
{
	int flag = 0;
	char ch;
	ifstream fin("Record.dat", ios::in);
	ofstream fout("temp.dat", ios::out);
	while (!fin.eof())
	{
		fin.read((char*) this, sizeof(hotel));
		if(room_no == r)
		{
			cout << "\n Name: "<< name;
			cout << "\n Address: "<<address;
			cout << "\n Phone no: "<<phone;
			cout << "\n Do you want to delete this record(y/n): ";
			cin >> ch;
			if(ch == 'n')
			fout.write((char*)this, sizeof(hotel));
			flag = 1;
		}
		else
		fout.write((char*)this, sizeof(hotel));
	}
	fin.close();
	fout.close();
	if(flag=0)
	cout << "Sorry room no not found or vacant... ";
	else
	{
		remove("Record.dat");
		rename("temp.dat", "Record.dat");
	}
}
main()
{
	hotel h;
	system("color 3f");
	cout << "\n\t ------------------------ ";
	cout << "\n\t HOTEL MANAGEMENT SYSTEM ";
	cout << "\n\t -------------------------";
	cout << "\n\n\t Made by: Chanderkant Tiwari";
	cout << "\n\n\t Press any key to continue.";
	getch();
	h.main_menu();
}























