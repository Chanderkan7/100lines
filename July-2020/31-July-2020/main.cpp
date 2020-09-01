#include <iostream>
#include <fstream>
using namespace std;
/*double division (int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a/b);
}*/
struct MyException : public exception
{
	const char * what () const throw()
	{
		return "C++ Exception";
	}
};
int main() 
{
	/*cout << "Subject \t Marks\nMathematics \t  90\nComputer \t  77\nChemistry \t  69\n";
	int num1, num2, temp;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "\nFirst number: " << num1;
	cout << "\nSecond number: " << num2;
	cout << "\nDoing magic to swap....\n";
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "\nFirst Number: " << num1;
	cout << "\nSecond Number: " << num2;
	(num1 > num2)?  cout << "\nnum1: " << num1 << " is bigger.\n" :cout << "num2" << num2 << " is bigger.\n";
	int tern1;
	cout << "Enter ternary operator number. ";
	cin >> tern1;
	(tern1%2)? cout << tern1 << " is odd." : cout << tern1 << " is even.\n";
	(condition)? true : false;
	int num1, num2;
	cout << "Enter the two numbers: ";
	cin >> num1 >> num2;
	cout << "num1: " << num1 << " \nnum2: " << num2;
	cout << "\nChanging the numbers....";
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	cout << "\nnum1: " << num1 << "\nnum2: " << num2 << endl;
	int a, b, c, greatest;
	cout << "Enter the 3 numbers: ";
	cin >> a >> b >> c;
	greatest = (a>b && a>c)?a:(b>c)?b:c;
	cout << "Greatest number is: " << greatest; 
	char data[100];
	ofstream outfile;
	outfile.open("afile.txt");
	cout << "Writing to the file" << endl;
	cout << "Enter your name: " << endl;
	cin.getline(data, 100);
	outfile << data << endl;
	cout << "Enter your age: " << endl;
	cin >> data;
	cin.ignore();
	outfile << data << endl;
	outfile.close();
	ifstream infile;
	infile.open("afile.txt");
	cout << "Reading from the file" << endl;
	infile >> data;
	cout << data << endl;
	infile >> data;
	cout << data << endl;
	infile.close()	;
	return 0;
	int x = 50;
	int y = 0;
	int z = 0;
	try 
	{
		z = division(x, y);
		cout << z << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
	return 0;*/
	try 
	{
		throw MyException();
	}
	catch (MyException& e)
	{
		cout << "MyException caught..." << endl;
		cout << e.what() << endl;
	}
	catch(exception& e)
	{
		//other errors.
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
}
