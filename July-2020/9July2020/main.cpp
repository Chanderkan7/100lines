#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <cmath>
#include <ctime>
#include <fstream>
#include <deque>
#include <iterator>
#include <stdio.h>
#include <memory>
#include <thread>
#include <chrono>
#include <mutex>
#include <list>
#include <forward_list>

using namespace std;
int GetRandom(int max){
	srand(time(NULL));
	return rand() %max;
}
void ExecuteThread(int id){
	auto nowTime = chrono::system_clock::now();
	time_t sleepTime =
	chrono::system_clock::to_time_t(nowTime);
	tm myLocalTime = *localtime(&sleepTime);
	cout << "Thread " << id << " Sleep Time: " << ctime(&sleepTime) << endl;
	cout << "Month: " << myLocalTime.tm_mon<<endl;
	cout << "Day: " << myLocalTime.tm_mday << endl;
	cout << "Year: " << myLocalTime.tm_year + 1900 << endl;
	cout << "Mins: " << myLocalTime.tm_min << endl;
	cout << "Seconds: "<< myLocalTime.tm_sec << endl;
	this_thread::sleep_for(chrono::seconds(GetRandom(3)));
	nowTime = chrono::system_clock::now();
	sleepTime = chrono::system_clock::to_time_t(nowTime);
	cout << "Thread " << id << "Awake time: " << ctime(&sleepTime) << endl;
}
int main(int argc, char** argv) {
	cout << "****9th July 2020********\n";
	thread th1(ExecuteThread, 1);
	th1.join();
	thread th2(ExecuteThread, 1);
	th2.join();
	/*vector<int> nums2 = {1, 2, 3, 4};
	vector<int>::iterator itr;
	for(itr = nums2.begin(); itr < nums2.end(); itr++){
		cout << *itr << endl;
	}
	vector<int>::iterator itr2 = nums2.begin();
	advance(itr2, 2);
	cout << *itr2 << endl;
	auto itr3 = next(itr2, 1);
	cout << *itr3 << endl;
	auto itr4=prev(itr2,1);
	cout <<*itr4 << endl;
	vector<int> nums3={1, 4, 5, 6};
	vector <int> nums4={2, 3};
	auto itr5 = nums3.begin();
	advance (itr5, 1);
	copy(nums4.begin(), nums4.end(), inserter(nums3, itr5));
	for (int &i: nums3)
	cout << i << endl;
	int amtToStore;
	cout << "How many number do you want to store? ";
	cin >> amtToStore;
	int *pNums;
	pNums = (int *) malloc(amtToStore * sizeof(int));
	if (pNums != NULL){
		int i = 0;
		while (i < amtToStore){
			cout << "Enter a number: ";
			cin >> pNums[i];
			i++;
		}
	}
	cout << "You entered: " << endl;
	for (int i=0; i < amtToStore; i++){
		cout << pNums[i] << endl;
		}
		delete pNums;
		int amtToStore2;
		cout << "How many number you want to store? ";
		cin >> amtToStore2;
		unique_ptr<int[]> pNums1(new int[amtToStore2]);
		if (pNums1!= NULL){
			int i=0;
			while (i < amtToStore2){
				cout << "Enter a numer: ";
				cin >> pNums1[i];
				i++;
			}
		}
		cout << "You entered these numbers: " << endl;
		for (int i=0; i< amtToStore2; i++){
			cout << pNums1[i] << endl;
		}*/
		return 0;
}
