

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

void elimDups(){
    string str;
    vector<string> str_vect;
    while(cin >> str){
        str_vect.push_back(str);
    }
    for(auto & const value:str_vect){
        cout << "value " <<value <<endl;
    }
    auto unique_end = unique(str_vect.begin(),str_vect.end());
    str_vect.erase(unique_end,str_vect.end());

    for(auto & const value:str_vect){
        cout << "after delete value " <<value <<endl;
    }
}

int main(){
    elimDups();
}