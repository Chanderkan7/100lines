#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream myFile("newfilename5.txt");
	myFile << "This is awesome!\n";
	string myText;
	cout << "Enter the text for file.";
	getline(cin, myText);
	myFile << myText;
	myFile.close();
	/*ofstream myFile("newfilename4.txt");
	myFile << "This will be directly put into. ";
	string myText;
	cout << "Enter the line to be pushed around: ";
	getline(cin, myText);
	myFile << myText;
	myFile.close();
	ofstream myFile("newFileName3.txt");
	myFile << "This data is directly entered into the ofstream object: ";
	string myText;
	cout << "Enter the string to be inserted into file: ";
	getline(cin, myText);
	myFile << myText;
	myFile.close();
	ofstream MyFile("newfilename2.txt");
	MyFile << "This is a text directly put into outfileobject.\n";
	string myText;
	MyFile << myText;
	MyFile.close();
	ofstream MyFile("newfilename.txt");
	MyFile << "This string is directly inserted into ofstream object.\n";
	string myText;
	cout << "Enter the line for file: ";
	getline(cin, myText);
	MyFile << myText;
	MyFile.close();
	ofstream MyFile("filename.txt");
	MyFile << "Files can be tricky but fun!\nNext line!\n";
	string myText;
	cout << "Enter the text you want to push to file: ";
	getline(cin, myText);
	MyFile << myText;
	MyFile.close();
	ofstream MyFile2("filename2.txt");
	MyFile2 << "This is second file and entry is made directly to ofstream object. \n";
	string myText2;
	cout << "Enter the line for 2nd text file: ";
	getline(cin, myText2);
	MyFile2 << myText2;
	MyFile2.close();
	ofstream MyFile3("filename3.txt");
	MyFile3 << "This is third file and this string is entered to ofstream object directly. \n";
	string myText3;
	cout << "Enter the line for 3rd text file: ";
	getline(cin, myText3);
	MyFile3 << myText3;
	MyFile3.close();
	ofstream MyFile4("filename4.txt");
	MyFile4 << "This is fourth file and this line is pused directly into the ofstream object.\n";
	string myText4;
	cout << "Enter the line for 4th text file: ";
	getline(cin, myText4);
	MyFile4 << myText4;
	MyFile4.close();
	ofstream MyFile5("filename5.txt");
	MyFile5 << "This line is inserted driectly into the ofstream object. ";
	string myText5;
	cout << "Enter the line for 5th text file: ";
	getline(cin, myText5);
	MyFile5 << myText5;
	MyFile5.close();
	ofstream MyFile6("filename6.txt");
	MyFile6 << "This line is inserted directly into ofstream object. \n";
	string myText6;
	cout << "Enter the line for 6th text file: ";
	getline(cin , myText6);
	MyFile6 << myText6;
	MyFile6.close();
	ofstream MyFile7("filename7.txt");
	MyFile6 << "This string is directly put into the ofstream object: ";
	cout << "Enter the line for 7th text file: ";
	string myText7;
	getline(cin, myText7);
	MyFile7 << myText7;
	MyFile7.close();
	ofstream MyFile8("filename8.txt");
	MyFile8 << "This string is entered directly into the ofstream object ";
	string myText8;
	cout << "Enter the line for 8th text file: ";
	getline(cin, myText8);
	MyFile8 << myText8;
	MyFile8.close();
	ofstream MyFile9("filename9.txt");
	MyFile9 << "This string is direcly pushed into the ofstream object.";
	string myText9;
	cout << "Enter the line for 9th file: ";
	getline(cin, myText9);
	MyFile9 << myText9;
	MyFile9.close();*/
}



















