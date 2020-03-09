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
	map<string, vector<int>> str_int_map;
	pair<map<string,vector<int>>::iterator,bool> insert_value = str_int_map.insert(map<string, vector<int>>::value_type("word", 1));



}

