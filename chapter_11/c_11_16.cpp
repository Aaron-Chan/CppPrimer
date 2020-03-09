#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <utility>
using std::vector;
using std::cout;
using std::map;
using std::endl;
using std::string;
using std::pair;


int main() {
	map<int, int> int_map;
	int_map.insert({ 1,2 });
	int_map.begin()->second = 3;
	cout << "map key 1 v=" << int_map.at(1) << endl;

}

