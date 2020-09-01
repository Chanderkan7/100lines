#include<iostream>
#include<fstream>
#include<conio.h>
#include<windows.h>
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
		void delete_rec(int);
};
void hotel::main_menu()
{
	int choice;
	while(choice!=5)
	{
		cout << "\n\t-----------------------";
		cout << "\n\t MAIN MENU ";
		cout << "\n\t------------------------";
		cout << "\n\t 1. Book a Room";
		cout << "\n\t 2. Custoomer Record";
		cout << "\n\t 3. Rooms Allocated";
		cout << "\n\t 4. Edit Record";
		cout << "\n\t 5. Exit";
		cout << "\n\t Enter your choice: ";
		cin >> choice;
		switch(choice)
			{
				case 1: add();	break;
				case 2: display();	break;
				case 3: rooms(); break;
				case 4: edit(); break;
				case 5: break;
				default:
					{
						cout << "Invalid Input!";
						getch();
					}
			}
		}	
}
void hotel::add()
{
	int r, flag;
	ofstream fout ("Record.dat", ios::app);
	cout << "\n Enter Customer Details";
	cout << "\n -----------------------";
	cout << "\n\n Room No: ";
	cin >> r;
	if (flag)
		cout << "\n Sorry! Room is already booked.";
	else
	{
		room_no = r;
		cout << "Name : ";
		gets(name);
		cout << "Address: ";
		gets(address);
		cout << "Phone no: ";
		gets(phone);
		fout.write((char*)this, sizeof(hotel));
		cout << "\n Room is booked...!";
	}
	cout <<"\n Press any key to continue...!";
	getch();
	fout.close();
}
void hotel::display()
{
	ifstream fin("Record.dat", ios::in);
	int r, flag;
	cout << "\nEnter room no: ";
	cin >> r;
	while(!fin.eof())
	{
		fin.read((char*)this, sizeof(hotel));
		if(room_no==r)
		{
			cout << "\n Customer Details";
			cout << "\n------------------";
			cout << "\n\n Room No: "<<room_no;
			cout << "\n Name: "<<name;
			cout << "\n Address: "<< address;
			cout << "Phone no: "<< phone;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "\n Sorry Room not vacant..!";
		cout << "\n\n Press any key to continue...!";
		getch();
		fin.close();
}
void hotel::rooms()
{
	ifstream fin("Record.dat", ios::in);
	cout << "\n\t\t\t List of Rooms";
	cout << "\n\t\t\t --------------";
	cout << "\n\n Room No. \tName \t\tAddress \t\t\t\tPhone No\n";
	while(!fin.eof())
	{
		fin.read((char*)this, sizeof(hotel));
		cout << "\n\n" << room_no <<"\t\t"<<name;
		cout << "\t\t" << address << "\t\t" << phone;
	}
	cout << "\n\n\n\t\t Press any key to continue...!";
	getch();
	fin.close();
}
void hotel::edit()
{
	int choice,r;
	cout << "\nEDIT MENU";
	cout << "\n----------";
	cout << "\n\n1.Modify Customer Record";
	cout << "\n2.Delete Customer Record";
	cout << "\n Enter your choice: ";
	cin >> choice;
	cout << "\nEnter room no: ";
	cin >> r;
	switch(choice)
	{
		case 1: modify(r); break;
		case 2: delete_rec(r); break;
		default : cout << "\nWrong Choice...!";
	}
	cout << "Press any key to continue...!";
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
	return (flag);
}
/*void hotel::modify(int r)
{
	long pos, flag = 0;
	fstream file("Record.dat", ios::in|ios::out|ios::binary);
	while(!file.eof())
	{
		fin.read((char*)this, sizeof(hotel));
		if(room_no == r)
		{
			flag = 1;
			break;
		}
	}
	fin.close();
	return(flag);
}*/
void hotel::modify(int r)
{
	long pos, flag=0;
	fstream file("Record.dat", ios::in|ios::out|ios::binary);
	while(!file.eof())
	{
		pos=file.tellg();
		file.read((char*)this, sizeof(hotel));
		if(room_no == r)
		{
			cout << "\nEnter New Details";
			cout << "\n------------------";
			cout << "\nName: ";
			gets(name);
			cout << "\nAddress: ";
			gets(address);
			cout << "\nPhone No: ";
			gets(phone);
			file.seekg(pos);
			file.write((char*)this, sizeof(hotel));
			cout << "\nRecord is modified!";
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	cout << "Sorry! Room not found or not vacant.";
	file.close();
}
void hotel::delete_rec(int r)
{
	int flag = 0;
	char ch;
	ifstream fin("Record.dat", ios::in);
	ofstream fout("temp.dat", ios::out);
	while(!fin.eof())
	{
		fin.read((char*)this, sizeof(hotel));
		if(room_no == r)
		{
			cout << "\nName: "<< name;
			cout << "\nAddress: "<< address;
			cout << "\nPhone no: "<<phone;
			cout << "\n\nDo you want to delete this record?(y/n): ";
			cin >> ch;
			if(ch == 'n')
			fout.write((char*)this, sizeof(hotel));
		}
		fin.close();
		fout.close();
		if(flag == 0)
		cout << "Sorry room not found or not vacant...";
		else
		{
			remove("Record.dat");
			rename("temp.dat", "Record.dat");
		}
	}
}
main()
{
	hotel h;
	system("color 3f");
	cout << "\n\t------------------------------";
	cout << "\n\t * HOTEL MANAGEMENT SYSTEM *";
	cout << "\n\t------------------------------";
	cout << "\n\n\tMade By: Internet";
	cout << "\n\n\tImplemented by: Chanderkant Tiwari";
	cout << "\n\n\tPress any key to continue...!";
	getch();
	h.main_menu();
}

















