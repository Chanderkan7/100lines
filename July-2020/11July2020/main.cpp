#include <cstdlib>
#include <limits>
#include <string>
#include <sstream>
#include <vector>
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
#include <iostream>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <regex>
using namespace std;
int main(int argc, char** argv) {
	cout << "****** 11 July 2020 *********" << endl;
	/*set<int> set1 {5, 4, 3, 2, 1, 1};
	for (int i: set1) cout << i << endl;
	cout << "Size " << set1.size() << endl;
	set1.insert(0);
	set<int>::iterator it = set1.begin();
	it++;
	cout <<"2nd " << *it << endl;
	for(int i: set1) cout <<"insert0 " << i <<endl;
	set1.erase(5);
	it = set1.end();
	advance(it, -2);
	set1.erase(it, set1.end());
	for(int i: set1) cout <<"erase " << i <<endl;
	int arr[] = {6, 7, 8, 9};
	set1.insert(arr, arr+4);
	auto val = set1.find(6);
	cout << "Found " << *val << endl;
	auto eight = set1.lower_bound(8);
	cout <<"8 " << *eight << endl;
	auto nine = set1.upper_bound(8);
	cout <<"9 "<< *nine << endl;
	set<int> set2 {10, 11};
	set1.swap(set2);
	for (int i: set1) cout << "Set1 "<< i << endl;
	multiset<int> mset1 {1, 2, 2, 3, 4};
	mset1.insert(4);
	mset1.insert(0);
	if (!mset1.empty()){
		for (int i: mset1)
		cout << i << endl;
	}
	map<int, string> map1;
	map1.insert(pair<int, string> (1, "Bart"));
	map1.insert(pair<int, string> (2, "Lisa"));
	map1.insert(pair<int, string> (3, "Marge"));
	map1.insert(pair <int, string> (4, "Chuck"));
	auto match = map1.find(1);
	cout << match->second <<endl;
	auto bart = map1.lower_bound(1);
	cout << "LB " << bart -> second << endl;
	auto lisa = map1.upper_bound(1);
	cout <<"UB " << lisa->second << endl;
	map<int, string>::iterator it2;
	for (it2 = map1.begin();it2!=map1.end();++it2){
		cout << "Key " << it2 -> first << endl;
		cout << "Value " << it2->second <<endl;
	}
	stack<string> custs;
	custs.push("George");
	custs.push("Louise");
	custs.push("Florence");
	cout << "Size " << custs.size() << endl;
	if (!custs.empty()){
		for (int i=0; i <custs.size(); i++){
			cout <<"Top " << custs.top() << endl;
			//cout <<"Pop" << custs.pop() << endl;
			custs.pop();
		}
	}
	queue<string> cast;
	cast.push("Zoidberg ");
	cast.push("Bender ");
	cast.push("Leela ");
	int size = cast.size();
	if (!cast.empty()){
		for(int i=0; i< size; i++){
			cout << cast.front()<<endl;
			cast.pop();
		}
	}
	priority_queue<int> nums;
	nums.push(4);
	nums.push(8);
	nums.push(5);
	int size = nums.size();
	if (!nums.empty()){
		for (int i=0; i < size; i++){
			cout << nums.top() << endl;
			nums.pop();
		}
	}
	enum day{Mon=1, Tue, Wed, Thur, Fri};
	enum day tuesday = Tue;
	cout << "Tuesday is the " << tuesday << "nd day of week" << endl;
	for (int i = Mon; i <=Fri; i++){
		cout << i  << endl;
	}*/
	string str = "The ape was at the apex";
	regex reg("(ape)[^]?");
	smatch matches;
	if (regex_search(str, matches, reg) == true){
		cout << matches.size() << " Matches" << endl;
		while (regex_search(str, matches, reg)){
			cout << matches.str(1) << endl;
			cout << "At index " << matches.position(1) << endl;
			str = matches.suffix().str();
		}
	}
	return 0;
}
