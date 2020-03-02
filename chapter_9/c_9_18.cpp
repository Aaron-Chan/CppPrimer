

#include <iostream>
#include <deque>
#include <string>
using std::deque;
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(){
    deque<string> de;
    string str;
    while(cin >> str){
        de.push_back(str);
    }
    for(auto b=de.cbegin();b!=de.cend();b++){
        std::cout << " de value " << *b<<std::endl;
    }
}