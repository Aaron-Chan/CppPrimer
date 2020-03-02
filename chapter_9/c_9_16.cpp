

#include <vector>
#include <iostream>
#include <list>
#include <string>
using std::vector;
using std::list;
using std::string;


int main(){
    vector<int> v1{1,2,3};
    list<int> l2{1,2,3};
    vector<int> v3(l2.cbegin(),l2.cend());
    std::cout << " v1==l2 " << (v1==v3) <<std::endl;
    
}