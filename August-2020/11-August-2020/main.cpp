#include <iostream>
#include <fstream>
using namespace std;
//void create();
int main()
{
	//create();
	/*cout << "Enter the number: ";
	int num;
	cin >> num;
	cout << "Number enetered is: " << num << endl;*/
	char ch[10];
	cout << "Enter the string, max[10]: ";
	cin >> ch;
	cout << "\nEntered string is: " << ch;
	int count = 0;
	do
	{
		count++;
	}
	while (ch[count] != '\0');
	cout << "\nLength: " << count;
	char ch2[10];
	for (int i=count-1, j=0; i>0, j < count; i--, j++)
	{
		ch2[j]=ch[i];
	}
	cout << "\nReversed string is: " << ch2;
}

/*void create()
{
	fstream fout;
	fout.open("reportcard.csv", ios::out|ios::app);
	cout <<"Enter the details of 2 students. \n" 
		<< "roll name maths phy chem bio"
		<< endl;
	int i, roll, phy, chem, math, bio;
	string name;
	for(i =0; i < 2; i++)
	{
		cin >> roll
			>> name
			>> math
			>> phy
			>> chem
			>> bio;
		fout << roll << ", "
			<< name << ", "
			<< math << ", "
			<< phy << ", "
			<< chem << ", "
			<< bio << "\n";
	}
}
	fstream fio;
	string line;
	fio.open("sample.txt", ios::trunc|ios::out|ios::in);
	while(fio)
	{
		getline(cin, line);
		if(line == "-1")
		break;
		fio<<line<<endl;
	}
	fio.seekg(0, ios::beg);
	while(fio)
	{
		getline(fio,line);
		cout << line << endl;
	}
	fio.close();
	return 0;*/
/*
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	char data[100];
	ofstream outfile;
	outfile.open("afile.dat");
	cout << "Writing to file... " << endl;
	cout << "Enter your name: ";
	cin.getline(data,100);
	outfile << data << endl;
	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();
	outfile << data << endl;
	outfile.close();
	ifstream infile;
	infile.open("afile.dat");
	cout << "Reading from the file... "<<endl;
	infile >> data;
	cout << data <<endl;
	infile >> data;
	cout << data << endl;
	infile.close();
	return 0;
}*/
