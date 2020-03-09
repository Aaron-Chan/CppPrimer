






#include <vector>
#include <iostream>
#include <string>
#include <map>
using std::vector;
using std::cout;
using std::map;
using std::endl;
using std::string;

void addFamily(map<string, vector<string>> &f_name_map, const string &family_name);
void addChild(map<string, vector<string>> &f_name_map, const string &family_name, const string &child);

int main() {
	map<string, vector<string>> f_name_map;
	addFamily(f_name_map, "James");
	addFamily(f_name_map, "Jackson");
	addChild(f_name_map, "James", "good");
	addChild(f_name_map, "Jackson", "hihi");
	addChild(f_name_map, "James", "hi");
	for (const auto &value : f_name_map) {
		cout << "family " << value.first << " ";
		for (const auto &child : value.second) {
			cout << "child " << child << " ";
		}
		cout << endl;
	}

}

void addFamily(map<string, vector<string>> &f_name_map, const string &family_name) {
	if (f_name_map.find(family_name) == f_name_map.end()) {
		f_name_map[family_name] = {};
	}
}

void addChild(map<string, vector<string>> &f_name_map, const string &family_name, const string &child) {
	addFamily(f_name_map, family_name);
	f_name_map[family_name].push_back(child);
}