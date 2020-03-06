

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

bool isShorter(const string &s1,const string &s2);

void elimDups(){
    string str;
    vector<string> str_vect;
    while(cin >> str){
        str_vect.push_back(str);
    }
    for(auto & const value:str_vect){
        cout << "value " <<value <<endl;
    }
    sort(str_vect.begin(),str_vect.end());
    auto unique_end = unique(str_vect.begin(),str_vect.end());
    str_vect.erase(unique_end,str_vect.end());
     for(auto & const value:str_vect){
        cout << "sort  value " <<value <<endl;
    }
    stable_sort(str_vect.begin(),str_vect.end(),isShorter);

    for(auto & const value:str_vect){
        cout << "stable_sort sort value " <<value <<endl;
    }
}

bool isShorter(const string &s1,const string &s2){
    return s1.size()<s2.size();
}

int main(){
    elimDups();
}