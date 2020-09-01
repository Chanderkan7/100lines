#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
	cout << "Hello World on 28th July!\n";
	cout << "I was successful!\n";
	cout << "Good night!\n";
	char c, fn[10];
	cout << "Enter the file name...";
	cin >> fn;
	ifstream in(fn);
	if(!in)
	{
		cout <<"Error! File does not exist....";
		getch();
		return 0;
	}
	cout << endl << endl;
	while(in.eof()==0)
	{
		in.get(c);
		cout << c;
	}
	getch();
	return 0;
	/*streampos size;
	char * memblock;
	ifstream file ("example.bin", ios::in|ios::binary|ios::ate);
	if (file.is_open())
	{
		size = file.tellg();
		memblock = new char[size];
		file.seekg(0, ios::beg);
		file.read(memblock,size);
		file.close();
		cout << "The entire file is in memory....";
		delete[] memblock;
	}
	else cout <<"Unable to open file... ";
	return 0;
	ofstream outfile;
	outfile.open("afile.dat");
	char data[100];
	cout << "Writing to file: " << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);
	outfile << data << endl;
	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();
	outfile << data << endl;
	outfile.close();
	ifstream infile;
	infile.open("afile.dat");
	cout << "Reading from the file..."<< endl;
	infile >> data;
	cout << data << endl;
	infile >> data;
	cout << data << endl;
	infile.close();
	return 0;
	cout << "Hello Bhai....\n";
	ofstream fout;
	string line;
	fout.open("sample.txt");
	while (fout)
	{
		getline(cin, line);
		if (line == "-1")
		break;
		fout << line << endl;
	}
	fout.close();
	ifstream fin;
	fin.open("sample.txt");
	while (fin)
	{
		getline(fin, line);
		cout << line << endl;
	}
	fin.close();
	return 0;
	char pass[20], pw[20]="password";
	int n, i = 0;
	cout << "Enter length of password: ";
	cin >> n;
	cout <<"\nEnter password: ";
	for (int i = 0; i<n ; i++)
	{
		pass [i] = getch();
		cout <<"*";
	}
	pass[i]='\0';
	if(strcmp(pass, pw) == 0)
	cout << "\n Correct Password.\n";
	cout << "\nIncorrect Password. \n";*/
}
