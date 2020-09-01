#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;
/*class smart_phone
{
	private:
		string phone_number;
		string message;
		string credit;
		string inbox;
	public:
		void no_blocking();
		void speed_dial();
		void emergency_no();
		string GetPhone_number()
			{
				return phone_number;
			}
		void SetPhone_number(string pn)
			{
				phone_number = pn;
			}
			string GetCredit()
			{
				return credit;
			}
			void SetCredit(string pn)
			{
				credit = pn;
			}
			string GetMessage()
			{
				return message;
			}
			void SetMessage(string msg)
			{
				message = msg;
			}
};*/
int main()
{	
	long int num_fact;
	cout << "Enter the number to factorial: ";
	cin >> num_fact;
	int result;
	for (int i =1; i <= num_fact; i++)
	{
		result = num_fact * (num_fact -1);
	}
	cout << "Result: " << result;
	/*int factors;
	int count =0;
	cout << "Enter the number you want to factorize: ";
	cin >> factors;
	for (int i = 1; i <= factors+1; i++)
		{
			if (factors%i == 0)
			{
				cout << " " << i;
				count++;
			}
			
		}
	cout << "\nTotal factors = "<<count;
	if (count == 2)
	{
		cout << factors << " is prime.";
	}
	else 
	{
		cout << factors << " is not prime!";
	}
	int odd_even;
	cout <<"Enter a number you want to check: ";
	cin >> odd_even;
	if (odd_even %2 == 0)
		{
			cout << odd_even << " is even!";
		}
	else 
		cout << odd_even << " is odd!";
	smart_phone n1;
	string a,b,c,d;
	cout << "Welcome to phone directory: \n\n";
	cout << "Enter the mobile number: ";
	cin >> a;
	n1.SetPhone_number(a);
	cout << "Enter your credit: ";
	cin >> c;
	n1.SetCredit(c);
	cout <<"Print message: ";
	cin >> d;
	n1.SetMessage(d);
	cout << "\n\n\n========================================\n";
	cout << "Overview of your information....\n";
	cout << "Your mobile number: " << n1.GetPhone_number()<<endl;
	cout << "Your balance: " << n1.GetCredit()<< endl;
	cout << "Your message: " << n1.GetMessage()<< endl;*/
}




















