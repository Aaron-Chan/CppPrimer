

#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

vector<int>* newVectInt() {
	return new vector<int>();
}

void readIntToVector(vector<int>* v) {
	int num;
	while (cin >> num) {
		v->push_back(num);
	}
}

void printVector(vector<int>* v) {
	for (auto& num : (*v)) {
		cout << " num " << num << endl;
	}
}


int main(){
	vector<int>* v = newVectInt();
	readIntToVector(v);
	printVector(v);
	delete v;
}


