

#include <vector>
#include "../chapter_7/c_7_26.h"
#include <iostream>
#include <string>
#include <set>
using std::set;
using std::multiset;
using std::cout;
using std::endl;
using std::string;

bool less(const Sales_data &s1, const Sales_data &s2) {
	return s1.isbn() < s2.isbn();
}

int main(){
	using Less = bool(*)(const Sales_data &s1, const Sales_data &s2);
	multiset<Sales_data, Less> book_store(less);
}

