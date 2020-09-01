#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 10
int flag=1;
void input(int [][SIZE], int [][SIZE], const int&, const int&, const int&);
void process(int [][SIZE], int [][SIZE], int [][SIZE], const int&, const int&, const int&);
void display(int [][SIZE], int [][SIZE], int [][SIZE], const int&, const int&, const int&);
int main()
{
	system("color f0");
	int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE];
	int m,n,x,y;
	cout << "Rule for multiplication of matrices: \n\nNumber of COLUMNS of Matrix 'A' must be equal to Number of ROWS of Matrix 'B'."<<endl<<endl;
	do
	{
		cout << "\n\nEnter the Number of ROWS of Matrix 'A' [Max 10]: ";
		cin >> m;
		if((m>=1) && (m<=10))
		break;
		else
		cout <<"Invalid Input..."<<endl;
	}
	while (1);
	do 
	{
		cout << " Enter the number of COLUMNS of Matrix 'A' [Max 10]";
		cin >> x;
		if((x>=1) && (x<=10))
		break;
		else
		cout << "Invalid Input..."<<endl;
	}
	while (1);
	do
	{
	cout << "Enter the Number of ROWS of Matrix 'B' [Max 10]: ";
	cin >> y;
	if((y>=1) && (y<=10))
	break;
	else
	cout << "Invalid Input......" << endl;
	}
	while (1);
	do
	{
		cout << "Enter the number of COLOUMNS of Matrix 'B' [Max 10]: ";
		cin >> y;
		if((y>=1) && (y<=10))
		break;
		else
		cout << "Invalid Input" << endl;
	}
	while (1);
	if(n==x)
	input (a,b,m,n,y);
	else
	{
		cout <<"Multiplication is not possible.\n";
		flag=0;
	}
	if(flag)
	process(a,b,c,m,n,y);
	if(flag)
	display(a,b,c,m,n,y);
	cout << endl << endl;
	return 0;
}
void input(int aa[][SIZE], int bb[][SIZE], const int& mm, const int& nn, const int& yy)
{
	system("cls");
	cout << "\t\tFor Matrix 'A'\n\n";
	for(int i=0; i<mm; i++)
	{
		for(int j=0; j<nn; j++)
		{
			cout << "Enter the element at ROW "<<i+1<<" and COLOUMN. "<<j+1<<" : ";
			cin>>aa[i][j];
		}
	}
	cout <<"\n\n\t\t For Matrix 'B'\n\n";
	for (int k=0; k<nn; k++)
	{
		for(int l=0;l<yy;l++)
		{
			cout << "Enter element at ROW " << k+1 << " and COLUMN "<< l+1 << " : ";
			cin >> bb[k][l];
		}
	}
}
void process(int aa[][SIZE], int bb[][SIZE], int cc[][SIZE], const int& mm, const int& nn, const int& yy)
{
	for(int i=0; i < mm; i++)
	{
		for(int j=0; j<mm ; i++)
		{
		cc[i][j] =0;
		cc[i][j] == cc[i][j]+(aa[i][j]*bb[i][j]);	
		}
	}
}
void display(int aa[][SIZE], int bb[][SIZE], int cc[][SIZE], const int& mm, const int& nn, const int& yy)
{
	system("cls");
	cout << "Matrix 'A' of the order " << mm <<"x" << nn << " =\n\n";
	for (int i=0; i<mm ; i++)
	{
		for (int j=0; j< nn; j++)
		cout << setw(8) << aa[i][j];
		cout << endl;
	}
	cout << "\n\nMatrix 'B' of the order " << nn << "x" << yy <<" =\n\n";
	for (int k=0; k<nn; k++)
	{
		for(int l=0; l<yy; l++)
		{
		cout << setw(8) << bb[k][l];
		cout << endl;	
		}
	}
	cout << "\n\n Their Product 'AxB' of the order "<<mm <<"x"<<yy<<" =\n\n";
	for(int p=0; p<mm; p++)
	{
		for(int q=0; p<yy; q++)
		{
			cout << setw(8)<<cc[p][q];
			cout << endl;
		}
	}
}
