

#include <vector>
#include <iostream>
#include <list>
#include <string>
using std::vector;
using std::list;
using std::string;


int main(){
    list<char*> l1={"1","2"};
    vector<string> v;
    v.assign(l1.cbegin(),l1.cend());
    for(auto b=v.cbegin();b!=v.cend();b++){
        std::cout << " v value " << *b<<std::endl;
    }

    
}