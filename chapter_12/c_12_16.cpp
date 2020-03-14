

#include <iostream>
#include <memory>

using std::unique_ptr;

int main() {

	unique_ptr<int> s(new int(1));

	unique_ptr<int> s2 = s;


}