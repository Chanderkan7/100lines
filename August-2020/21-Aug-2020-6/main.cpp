#include <iostream>
#include <cstring>
using namespace std;
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
int main()
{
	struct Books Book1;
	struct Books Book2;
	strcpy(Book1.title, "Learn C++ Programming");
	strcpy(Book1.author, "Chand Miyan");
	strcpy(Book1.subject, "C++ Programming");
	Book1.book_id = 6490100;
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Yakit Singa");
	strcpy(Book2.subject, "Telecom");
	Book2.book_id = 6490200;
	cout << "Book 1 Title: " << Book1.title << endl;
	cout << "Book 1 Author: " << Book1.author << endl;
	cout << "Book 1 Subject: " << Book1.subject << endl;
	cout << "Book 1 ID: " << Book1.book_id << endl;
	// second book
	cout << "Book 2 Title: " << Book2.title << endl;
	cout << "Book 2 Author: " << Book2.author << endl;
	cout << "Book 2 Subject: " << Book2.subject << endl;
	cout << "Book 2 ID: " << Book2.book_id << endl;
	return 0;
}
/*#include <thread>
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;
struct ThreadItem
{
	char* result;
	thread worker;
};
void* ThreadFunction(char** result)
{
	*result = new char[256];
	snprintf(*result, 256, "Hello World from thread ID %d", std::this_thread::get_id());
}
int main()
{
	int n = thread::hardware_concurrency();
	vector<ThreadItem> threadlist;
	threadlist.resize(n);
	for(int i =0; i< n; i++)
	{
		threadlist[i].worker = thread(ThreadFunction, &threadlist[i].result);
	}
	for (int i = 0; i< n; i++)
	{
		threadlist[i].worker = thread(ThreadFunction, &threadlist[i].result);
	}
	for (int i =0; i< n;i++)
	{
		threadlist[i].worker.join();
	}
	cout << "Results: \n";
	for(int i = 0;i<n;i++)
	{
		printf("%s\n", threadlist[i].result);
	}
}
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
}*/
