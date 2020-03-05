

#include <vector>
#include <iostream>
#include <algorithm>
using std::vector;
using std::cout;
using std::endl;

int main(){
    vector<int> vect{1,2,3,4,6,6,6,6,3,23,6,2};
    int num = count(vect.cbegin(),vect.cend(),6);
    cout <<" num " <<num<< endl;
}