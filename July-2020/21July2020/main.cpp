#include <iostream>

int main(int argc, char** argv) {
	std::cout << "************ 21 July 2020 ***********\n";
	std::cout <<"Today I got an offer from Tata Technologies\n";
	std::cout <<"I am grateful for this offer\n";
	std::cout <<"It has added to my confidence!\n";
	for (int i =0; i < 10; i++)
		std::cout<<i<<" ";
	std::cout<<"\n";
	int whiletest = 0;
	while (whiletest < 10){
		std::cout << "number: "<< whiletest <<" number%2 : " << whiletest%2 << " ";
		whiletest++;
		std::cout<<"\n";
		}
	std::cout <<"I am practicing cpp more and more\n";
	std::cout <<"Atleast this will help me get more understanding\n";
	std::cout <<"This should add more to my IT skills.\n";
	std::cout <<"It is fascinating to see how this works\n";
	std::cout <<"This will become more and more interstring.\n";
	/*/int inputN;
	//std::cout <<"Enter your number: ";
	//std::cin >> inputN;
	//std::cout <<"Number you've shared is: " << inputN;
	int fact;
	std::cout <<"Enter a number: ";
	std::cin >> fact;
	std::cout << "Factors of " << fact << " are: ";
	for (int i=1; i <= fact; i++){
		if (fact % i == 0)
			std::cout<<i<<", ";
		}
	int rows;
	std::cout << "\nEnter number of rows: ";
	std::cin >> rows;
	for (int i =1; i <= rows; ++i)
	{
		for(int j = 1; j <=i; ++j)
		{
			std::cout<<" i= "<<i<<" j ="<<j;
		}
		std::cout <<"\n";		
	}
	int rows;
	std::cout << "Enter the rows: ";
	std::cin >> rows;
	for (int i = rows; i >= 1; --i)
	{
		for (int j = 1; j <=i ; ++j)
		{
			std::cout <<"* ";
		}
		std::cout<<"\n";
	}
	int space, rows;
	std::cout << "Enter the number of rows: ";
	std::cin >> rows;
	for (int i = 1, k = 0; i <= rows; ++i, k = 0 )
	{
		for (space = 1; space <= rows-1; ++space)
		{
			std::cout<<" ";
		}
		while (k != 2*i-1)
		{
			std::cout<<"* ";
			++k;
		}
		std::cout << "\n";
	}*/
	int space, rows;
    std::cout <<"Enter number of rows: ";
    std::cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
         std::cout <<"  ";
        }
        while(k != 2*i-1)
        {
            std::cout << "* ";
            ++k;
        }
        std::cout << "\n";
    }    
	int rows2, number = 1;
	std::cout << "Enter the number of rows: ";
	std::cin >> rows2;
	for (int i = 1; i <= rows2; i++)
	{
		for(int j=1; j<=i; ++j)
		{
		std::cout << number <<" ";
		++number;	
		}
		std::cout<<"\n";
	}
}
