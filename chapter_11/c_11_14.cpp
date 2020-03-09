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

void addFamily(map<string, vector<pair <string, string>>> &f_name_map, const string &family_name);
void addChild(map<string, vector<pair <string, string>>> &f_name_map, const string &family_name, const string &child, const string& birth_day);

int main() {
	map<string, vector<pair <string, string>>> f_name_map;
	addFamily(f_name_map, "James");
	addFamily(f_name_map, "Jackson");
	addChild(f_name_map, "James", "good", "1992-05-11");
	addChild(f_name_map, "Jackson", "hihi", "1992-05-12");
	addChild(f_name_map, "James", "hi", "1992-05-02");
	for (const auto &value : f_name_map) {
		cout << "family " << value.first << " ";
		for (const auto &child : value.second) {
			cout << "child name " << child.first << " birthday " << child.second << " ";
		}
		cout << endl;
	}

}

void addFamily(map<string, vector<pair <string, string>>> &f_name_map, const string &family_name) {
	if (f_name_map.find(family_name) == f_name_map.end()) {
		f_name_map[family_name] = {};
	}
}

void addChild(map<string, vector<pair <string, string>>> &f_name_map, const string &family_name, const string &child, const string& birth_day) {
	addFamily(f_name_map, family_name);
	f_name_map[family_name].push_back({ child,birth_day });
}