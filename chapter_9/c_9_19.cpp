

#include <iostream>
#include <deque>
#include <list>
#include <string>
using std::list;
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(){
    list<string> de;
    string str;
    while(cin >> str){
        de.push_back(str);
    }
    for(auto b=de.cbegin();b!=de.cend();b++){
        std::cout << " de value " << *b<<std::endl;
    }
}