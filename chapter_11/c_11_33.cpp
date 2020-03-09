#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
using std::vector;
using std::map;
using std::string;
using std::endl;
using std::cout;


map<string, string> read_rule(std::istream &rule_stream) {
	map<string, string> rules;
	string word;
	while (rule_stream >> word) {
		string target_word;
		if (getline(rule_stream, target_word)) {
			rules[word] = target_word.substr(1);
		}
		else {
			break;
		}
	}
	return rules;
}

const string &getTarget(string &word, map<string, string> &rules) {
	if (rules.count(word)) {
		return rules[word];
	}
	else {
		return word;
	}
}

void  transform(std::istream &rule_stream, std::istream &input_stream, std::ostream &out_stream) {
	auto rule_map = read_rule(rule_stream);
	string line;
	while (getline(input_stream, line)) {
		std::istringstream stream(line);
		string word;
		while (stream >> word) {
			string target_w = getTarget(word, rule_map);
			out_stream << target_w << " ";

		}
		out_stream << endl;
	}

}


int main()
{
	std::ifstream rule_is("./c_11_33_rule.txt");
	std::ifstream input_is("./c_11_33_input.txt");
	std::ofstream out_is("./c_11_33_output.txt");
	transform(rule_is, input_is, out_is);

}