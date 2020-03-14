

#include <iostream>
#include <memory>
#include <string>

using std::unique_ptr;
using std::string;

unique_ptr<char[]> connect(const string& s1, const string& s2) {
	unique_ptr<char[]> ptr(new char[s1.size() + s2.size()+1]);
	for (string::size_type i = 0; i < s1.size(); i++) {
		ptr[i] = s1[i];
	}

	for (string::size_type i = 0; i < s2.size(); i++) {
		ptr[i+s1.size()] = s2[i];
	}
	return ptr;
}

int main() {
	unique_ptr<char[]> uq = connect("hello", " world");
	
	
}