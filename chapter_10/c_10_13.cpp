

#include <list>
#include <iostream>
#include <algorithm>
#include <vector>

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;

bool strSize(const string &s1){
    return s1.size() >= 5;
}

void elimDups(){
    vector<string> v{"1","245566","hellow ","2"};
    auto not_end = partition(v.begin(),v.end(),strSize);
    for(auto beg = v.begin();beg!=not_end;beg++){
        cout << " more than 5char words " << *beg << endl;
    }
    
}



int main(){
    elimDups();
}