#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <cmath>
#include <ctime>
#include <fstream>
#include <deque>
#include <iterator>
#include <memory>
#include <thread>
#include <chrono>
#include <mutex>
#include <list>
#include <forward_list>
using namespace std;

int main(int argc, char** argv) {
	cout << "****10thJuly2020*******\n";
	/*deque<int> deq1;
	deq1.push_back(5);
	deq1.push_front(1);
	for (int i: deq1) cout << i << endl;
	cout << "Size " << deq1.size() << endl;
	deq1.assign({11, 12});
	cout << "Size " << deq1.size() << endl;
	cout << deq1[0] << endl;
	cout << deq1.at(1) << endl;
	deque<int>::iterator it = deq1.begin() +1;
	deq1.insert(it, 3);
	int tempArr[5]={6,  7, 8, 9, 10};
	deq1.insert(deq1.end(), tempArr, tempArr+5);
	for(int i:deq1) cout << "Orignal deq: " << i << endl;
	deq1.erase(deq1.end());
	for (int i: deq1) cout << "deq1.end() " << i << endl;
	for (int i: deq1) cout << "deq1.begin(), deq1.begin()+2 " << i << endl;
	deq1.erase(deq1.begin(), deq1.begin()+2);
	for (int i: deq1) cout<< i << endl;
	deq1.pop_front();
	for (int i: deq1) cout<< i << endl;
	deq1.pop_back();
	for (int i: deq1) cout << i << endl;
	deque<int> deq2(2, 50);
	for (int i: deq1) cout << i << endl;
	deq1.swap(deq2);
	for (int i: deq1) cout<< i << endl;
	deq1.clear();
	for(int i: deq1) cout << i <<endl;
	int arr[5] = {1, 2, 3, 4, 5};
	list<int> list1;
	list1.insert(list1.begin(), arr, arr+5);
	for (int i: list1) cout << "Orignal " << i << endl;	
	list1.assign({11, 12, 13});
	for (int i: list1) cout << "assign 11, 12, 13 " << i << endl;
	list1.push_back(55);
	for (int i: list1) cout << "push_back(55)" << i << endl;
	list1.push_front(1);
	for (int i:list1) cout << "push_front 1 " << i<< endl;
	cout << list1.size() << endl;
	list<int>::iterator it2 = list1.begin();
	advance(it2,1);
	cout << "2nd index: " << *it2 << endl;
	it2=list1.begin();
	list1.insert(it2, 8);
	for (int i:list1) cout << "insert(it2,8) " << i<< endl;
	list1.erase(list1.begin());
	for (int i:list1) cout << "erase.begin " << i<< endl;
	it2 = list1.begin();
	list<int>::iterator it3 = list1.begin();
	advance(it3,2);
	list1.erase(it2, it3);
	for (int i:list1) cout << "erase it2, it3 " << i<< endl;
	list1.pop_front();
	for (int i:list1) cout << "pop_front() " << i<< endl;
	list1.pop_back();
	for (int i:list1) cout << "pop_back() " << i<< endl;
	list1.erase(it2, it3);
	for (int i:list1) cout << "erase(it2, it3) " << i<< endl;
	int arr[5] = {1, 2, 3, 4, 5};
	list<int> list1;
	list1.insert(list1.begin(),arr,arr+1);
	int arr2[6] = {10, 9, 8, 7, 6, 6};
	list<int> list2;
	list2.insert(list2.begin(), arr2, arr2+5);
	for(int i: list2) cout<<"list2 " << i << endl;
	list2.sort();
	for(int i: list2) cout<<"list2.sort() " << i << endl;
	list2.reverse();
	for(int i: list2) cout<<"list2.reverse() " << i << endl;
	list2.unique();
	for(int i: list2) cout<<"list2.unique() " << i << endl;
	for(int i: list1) cout<<"list1.unique() " << i << endl;
	list1.merge(list2);
	for(int i: list1) cout<<"list1.unique() " << i << endl;*/
	forward_list<int> fl1;
	fl1.assign({1, 2, 3, 4});
	fl1.push_front(0);
	fl1.pop_front();
	cout << "Front " << fl1.front() << endl;
	forward_list<int> :: iterator it4 = fl1.begin();
	it4=fl1.insert_after(it4, 5);
	for (int i: fl1) cout << i << endl;
	fl1.emplace_front(6);
	for (int i: fl1) cout << "emplace_front(6)" << i << endl;
	fl1.remove(6);
	for (int i: fl1) cout << "remove(6)" << i << endl;
	forward_list<int> fl2;
	fl2.assign({9,8,7,6,6});
	fl2.unique();
	fl2.sort();
	fl2.merge(fl1);
	fl1.merge(fl2);
	for (int i: fl1) cout << "fl1.merge(fl2)" << i << endl;
	return 0;
}
