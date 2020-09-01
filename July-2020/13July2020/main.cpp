#include <iostream>
#include <vector>
#include <string>
#include <fstream>
/*int addNumbers(int firstNum, int secondNum = 0){
	int combinedValue = firstNum + secondNum;
	return combinedValue;
}
int addNumbers (int firstNum, int secondNum, int thirdNum){
	return firstNum + secondNum + thirdNum; 
}
int getFactorial(int number){
	int sum;
	if (number == 1) sum =1;
	else sum = getFactorial(number-1) * number;
	return sum;
}*/
using namespace std;
int main(int argc, char** argv) {
	cout << "***** 13th July 2020 ***** \n";
	/*char happyArray[6] = { 'H', 'a', 'p', 'p', 'y', '\0'};
	string birthdayString = "Birthday";
	cout << happyArray + birthdayString << endl;
	string yourName;
	cout <<"What is your name ";
	getline(cin, yourName);
	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;
	cout <<"What is Euler's Constant? ";
	getline(cin, eulerGuess);
	eulerGuessDouble = stod(eulerGuess);
	if (eulerGuessDouble == eulersConstant) {
		cout << "You are right!" << endl;
	}
	else { cout << "You are wrong!" << endl;
	}
	cout << "Size of String: " << eulerGuess.size() << endl;
	cout << "Is string empty: " << eulerGuess.empty() << endl;
	cout << eulerGuess.append(" was your guess") << endl;
	string dogString = "dog";
	string catString = "cat";
	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;
	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;
	string firstName = wholeName.assign(wholeName, 0, 5);
	cout << firstName << endl;
	int lastNameIndex = yourName.find("Banas", 0);
	cout << "Index for last name: " << lastNameIndex << endl;
	yourName.insert(5, " Justin"); cout << yourName << endl;
	yourName.erase(6, 7); cout << yourName << endl;
	yourName.replace(6, 5, "Maximus"); cout << yourName << endl;
	vector <int> lotteryNumVect(10);
	int lotteryNumArray[5]  = {4, 13, 14, 24, 34}; 
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, 
	lotteryNumArray+3);
	cout << lotteryNumVect.at(2) << endl;
	lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);
	cout << lotteryNumVect.at(5) << endl;
	lotteryNumVect.push_back(64);
	cout << "Final Value " << lotteryNumVect.back() << endl;
	cout << "First Value " << lotteryNumVect.front() << endl;
	cout << "Size " << lotteryNumVect.size() << endl; 
 	cout << addNums(1) << endl;
 	cout << addNums(1, 5, 6) << endl;
	cout << "Factorial of 3 is " << getFactorial(3) << endl;*/
	string steveQuote = "A day without sunshine is like night. "	;
	ofstream writer("stevequote.txt");
	if (!writer){
		cout << "Error writing file..." << endl;
		return -1;
	} else {
		writer << steveQuote << endl;
		writer.close();
	}
	ofstream writer2("stevequote.txt", ios::app);
	if (!writer2) {
		cout << "Error while writing file... " << endl;
		return -1;
	} else {
		writer2 << "\n -Steve Martin" << endl;
		writer2.close();
	}
	char letter; 
	ifstream reader("stevequote.txt");
	if (!reader)
	{
		cout << "Error opening file reader " << endl;
		return -1;
	}else {
		for (int i=0; !reader.eof();i++){
			reader.get(letter);
			cout << letter;
		}
		cout << endl;
		reader.close();
	}
	return 0;
}
