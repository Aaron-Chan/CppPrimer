

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include "c_12_6.h"
using std::vector;
using std::cout;
using std::map;
using std::endl;
using std::string;



int main(){
	StrBlob s1;
	StrBlob s2{"1","2"};
	s1.push_back("1");
	s1.push_back("2");
	s2 = s1;
	s1.push_back("2");

	cout << "s1 cout " << s1.size() << endl;
	cout << "s2 cout " << s2.size() << endl;
}


