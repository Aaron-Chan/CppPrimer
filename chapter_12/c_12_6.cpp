

#include <vector>
#include <iostream>
#include <memory>
using std::vector;
using std::cout;
using std::cin;
using std::shared_ptr;
using std::endl;

shared_ptr<vector<int>> newVectInt() {
	return std::make_shared<vector<int>>();
}

void readIntToVector(shared_ptr<vector<int>> v) {
	int num;
	while (cin >> num) {
		v->push_back(num);
	}
}

void printVector(shared_ptr<vector<int>> v) {
	for (auto& num : (*v)) {
		cout << " num " << num << endl;
	}
}


int main(){
	shared_ptr<vector<int>> v = newVectInt();
	readIntToVector(v);
	printVector(v);
	delete v;
}


