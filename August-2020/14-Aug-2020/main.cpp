#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{ 
 	/*ofstream myfile("newfile.txt");
	myfile << "This text is inserted into ofstream object directly \n";
	string newstring;
	cout << "Enter the line to insert into file: ";
	getline(cin, newstring);
	myfile << newstring;
	myfile.close();*/
    ifstream file("filename.txt");
    string str; 
    while (getline(file, str))
    {
        cout << str;
    }
    file.close();
    cout << endl;
    ifstream file2("filename2.txt");
    string str2;
    while(getline(file2, str2))
    {
    	cout << str2;
	}
    file2.close();
    cout << endl;
    ifstream file3("filename3.txt");
    string str3;
    while(getline(file3, str3))
    {
    	cout << str3;
	}
	file3.close();
	cout << endl;
	ifstream file4("filename4.txt");
	string str4;
	while (getline(file4, str4))
	{
		cout << str4;
	}
	file4.close();
	cout << endl;
	ifstream file5("filename5.txt");
	string str5;
	while(getline(file5, str5))
	{
		cout << str5;
	}
	file5.close();
	cout << endl;
	ifstream file6("filename6.txt");
	string str6;
	while (getline (file6, str6))
	{
		cout << str6;
	}
	file6.close();
	cout << endl;
	ifstream file7("filename7.txt");
	string str7;
	while (getline(file7, str7))
	{
		cout << str7;
	}
	file7.close();
	cout << endl;
	ifstream file8("filename8.txt");
	string str8;
	while (getline(file8, str8))
	{
		cout << str8;
	}
	file8.close();
	ifstream file9("filename9.txt");
	string str9;
	while(getline(file9, str9))
	{
		cout << str9;
	}
	file9.close();
	cout << endl;
	ifstream newfile1("newfilename.txt");
	string newstr1;
	while(getline(newfile1, newstr1))
	{
		cout << newstr1;
	}
	newfile1.close();
	cout << endl;
	ifstream filenew3("newFileName3.txt");
	string strnew3;
	while(getline(filenew3, strnew3))
	{
		cout << strnew3;
	}
	filenew3.close();
}



































