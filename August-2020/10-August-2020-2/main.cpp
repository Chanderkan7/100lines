#include <iostream>
using namespace std;

int main() 
{
	int i=0;
	char palin[10];
	char revpalin[10];
	char temp[10];
	cout << "Enter string: ";
	cin >> palin;
	do
	{
		i++;
	}
	while (palin[i]!='\0');
	cout << "Length is: " << i << endl;
	for (int j = i-1, k = 0; j >= 0, k<i ; j--, k++)
	{
		revpalin[k] = palin[j];
	}
	cout << revpalin << " "<< palin;
	for (int w = 0; w < i; w++)
	
	if(palin[w] == revpalin[w])
	{
		cout << "\nPalindrome!";
	}
	else
	{
		cout << "\nNot palindrome!";
	}
		
}
