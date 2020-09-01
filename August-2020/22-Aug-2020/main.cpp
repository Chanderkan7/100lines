#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
/*void drawLine(int n, char symbol);
void rules();*/
int main(int argc, char** argv) 
{
	try
	{
		int age = 15;
		if(age>18)
		{
			cout << "Access granted - you are old enough";
		}
		else
		{
			throw(age);
		}
	}
	catch(int myNum)
	{
	cout << "You are " << myNum << " years old. \nComeback once you're 18!\n";	
	}
}	
	/*cout << "******* 22 August 2020 *************\n";
	string playerName;
	int amount;
	int bettingAmount;
	int guess;
	int dice;
	char choice;
	srand(time(0));
	drawLine(60, '_');
	cout << "\n\n CASINO GAME \n\n\n";
	drawLine(60, '_');
	cout << "\nEnter your name: ";
	getline(cin, playerName);
	cout << "\nEnter the deposite amount: $";
	cin >> amount;
	do
	{
		system("cls");
		rules();
		cout << "Your current balance is: $"<< amount << "\n";
		do
		{
			cout << playerName << ", enter money to bet: $";
			cin >> bettingAmount;
			if(bettingAmount > amount)
			cout << "Betting amount exceeds curr balance\nRe-enter.\n";
		}
		while(bettingAmount > amount);
		do
		{
			cout << "Guess number between 1-10";
			cin >> guess;
			if(guess <=0 || guess >10)
			cout << "Invalid input, enter number between 1-10";
		} while(guess <=0 || guess > 10);
		dice = rand()%10+1;
		if(dice == guess)
		{
			cout << "\n\nGood luck, you won!" << bettingAmount * 10;
			amount = amount - bettingAmount;
		}
		cout << "The Winning number was: "<<dice << "\n";
		cout << "\n" << playerName << ", You have $"<<amount << "\n";
		if(amount == 0)
		{
			cout << "You have no money to play.";
			break;
		}
		cout << "Do you want to play again? (y/n) ";
		cin >> choice;
	} while(choice == 'Y' || choice == 'y');
	cout <<"\n\n\n";
	drawLine(70, '=');
	cout << "\n\nThanks for playing, you balance is: $" << amount << "\n\n";
	drawLine(70,'=');
	return 0;
}
void drawLine(int n, char symbol)
{
	for (int i =0; i<n;i++)
	{
		cout << symbol;
		//cout << "\n";
	}
}
void rules()
{
	system("cls");
	cout << "\n\n";
	drawLine(80,'-');
	cout << "The rules of game: ";
	drawLine(80,'-');
	cout << "\t1. Choose number between 1-10\n";
	cout << "\t2. If you win, you get 10 times\n";
	cout << "\t3. If you lose, you lose betting amount\n";
	drawLine(80, '-');*/
