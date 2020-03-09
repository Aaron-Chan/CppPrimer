

#include <vector>
#include <utility>
#include <iostream>
#include <string>
#include <set>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;
using std::pair;



int main(){
	vector<pair<string, int>> v;
	string str;
	int num;
	while (cin >> str >> num) {
		//v.push_back(pair<string, int>(str, num));
		//v.push_back(pair<string, int>{str, num});
		v.push_back(make_pair(str, num));
		//v.push_back({str, num});
	}
	for (auto &value : v) {
		cout << "str " << value.first << " second " << value.second << endl;
	}
}

