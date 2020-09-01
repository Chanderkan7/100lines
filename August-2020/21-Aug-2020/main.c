#include <iostream>
using namespace std;
void foo()
{
	cout << "Hello World!\n";
}
int main(int argc,char** argv)
{
	char input = 0;
	cout << "Hello! This is a console application." << endl;
	cout << "Press q to quit, press a to execute foo." << endl;
	while(1)
	{
		cin >> input;
		if(input == 'a')
		{
			foo();
		}
		else if(input == 'q')
		{
			break;
		}
		else if(input != '\n')
		{
			cout << "Unknown command! '" << input << "' ..Ignoring...\n";
		}
	}
	return 0;
	
}
