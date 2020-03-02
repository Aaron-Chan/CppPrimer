

#include <vector>
#include <iostream>
#include <list>
using std::vector;
using std::list;


int main(){
    vector<int> v1={1,2,3};
    vector<double> v2={1,2.2,3.1};
    list<int> l1(v1.cbegin(),v1.cend());
    // list<int> l2(v2.cbegin(),v2.cend());
    for(auto b=l1.cbegin();b!=l1.cend();b++){
        std::cout << " l1 value " << *b<<std::endl;
    }

    
}