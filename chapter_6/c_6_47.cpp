#include <iostream>
#include <string>
#include <vector>
// #define NDEBUG
using std::vector;
using std::cout;
using std::endl;

void printVector(vector<int> &vec){
    #ifndef NDEBUG
        cout << "vector size: " << vec.size() << endl;
    #endif
    if(!vec.empty()){
        auto tmp = vec.back();
        vec.pop_back();
        printVector(vec);
        cout << tmp << " ";
    }
}

int main(){
   vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    printVector(vec);
    cout << endl;

    return 0;
    
}