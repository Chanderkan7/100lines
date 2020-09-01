#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int main() {
	cout << "***** 12th July 2020 \n";
	const double PI = 3.1415926535;
	char myGrade = 'A';
	bool isHappy = true;
	int myAge = 29;
	float favNum = 3.1415;
	double otherfavNum = 1.623467;
	cout << "Favourite Number " << favNum << endl;
	cout << "Size of int: " << sizeof(myAge)<< endl;
	cout << "Size of char: " << sizeof(myGrade)<<endl;
	cout << "Size of bool: " << sizeof(isHappy)<<endl;
	cout << "Size of float: "<< sizeof(favNum)<<endl;
	cout << "Size of double: "<< sizeof(otherfavNum)<<endl;
	int largestInt = 2147483647;
	cout << "Largest Int: " << largestInt << endl;
	int largestInt2 = 2147483648;
	cout << "Largest Int2: " << largestInt2 << endl;
	cout << "5 + 2: " << 5 + 2 << endl;
	cout << "5 - 2: " << 5 - 2 << endl;
	cout << "5 * 2: " << 5 * 2 << endl;
	cout << "5 / 2: " << 5 / 2 << endl;
	cout << "5 % 2: " << 5 % 2 << endl;
	int five = 5;
	cout << "5++ : " << five++ << endl;
	cout << "++5 : " << ++five << endl;
	cout << "5-- : " << five-- << endl;
	cout << "--5 : " << --five << endl;
	five += 6; cout << five << endl;
	five = five +6; cout << five << endl;
	// order of operation is BODMAS
	cout << "4 / 5 " << 4 / 5  << endl;
	cout << "(float)4 / 5 = " << (float) 4/5 << endl;
	int age = 70; cout << "age: " << age << endl;
	int ageAtLastExam = 16; cout << "ageAtLastExam: " << ageAtLastExam << endl;
	bool isNotIntoxicated = true;
	if ((age >=1 ) && (age < 16)){
		cout <<"You can't drive. " << endl;
	} else if(! isNotIntoxicated){
		cout << "You can't drive. " << endl;
	} else if(age >= 80 && ((age >100) 
	|| ((age - ageAtLastExam) >5 ))){
		cout << "You can't drive. " <<endl;
	} else {
		cout << "You can drive." << endl;
	}
	int greetingOption = 2;
	switch(greetingOption){
		case 1:
			cout << "Bonjur " << endl;
			break;
		case 2:
			cout << "Hola " << endl;
			break;
		case 3:
			cout << "Namaste " << endl;
		default:
			cout << "Hello... " << endl;
	}
	//Ternary Operator: variable = (condition) ? true : false
	int largestNum = (5>2)? 5:2;
	cout << "output (5>2)? 5:2 = " << largestNum<< endl;
	int myFavNums[5];
	int badNums[5] = {4, 13, 14, 24, 34};
	cout << "Bad Numer 1: " << badNums[0] <<endl;
	char myName[5][5] = {{'D', 'e', 'r', 'e', 'k'},
						{'B', 'a', 'n', 'a', 's'}};
						//cout << myName;
	cout << "3rd letter in 1st array: " << myName[0][2] << endl;
	myName[0][2] = 'e';
	cout << "After change 3rd letter in 1st array: " << myName[0][2]
	<< endl;
	for (int i=1; i <=10; i++){
		cout << i << endl;
	}
	for (int j=0; j<5; j++) {
		for (int k = 0; k < 5; k++){
			cout << myName[j][k];
		}
		cout << endl;
	}
	int randNum = (rand() %100) +1;
	while (randNum != 100){
		cout << randNum << ", ";
		randNum = (rand()%100) +1;
	}
	int index = 1; cout << endl;
	while (index <= 10){
		cout << index << endl;
		index++;
	}
	string numberGuessed;
	int intNumberGuessed = 0;
	do {
		cout << "Guess number b/w 1 to 10: ";
		//getline(cin, numberGuessed);
		cin >> numberGuessed;
		intNumberGuessed = stoi(numberGuessed);
		cout << intNumberGuessed << endl;
	} while (intNumberGuessed != 4);
	cout << "You win!" << endl;
	return 0;
}
