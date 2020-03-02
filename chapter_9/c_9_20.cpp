

#include <iostream>
#include <deque>
#include <list>
#include <string>
using std::list;
using std::cin;
using std::deque;
using std::cout;
using std::endl;
using std::string;


int main(){
    list<int> l1={1,2,3,4,5,6};
    deque<int> d1;
    deque<int> d2;
    
    for(auto b=l1.cbegin();b!=l1.cend();b++){
        if(*b%2==0){
            d1.push_back(*b);
        }else{
            d2.push_back(*b);
        }
    }
    for(auto b=d1.cbegin();b!=d1.cend();b++){
        std::cout << " d1 value " << *b<<std::endl;
    }
     for(auto b=d2.cbegin();b!=d2.cend();b++){
        std::cout << " d2 value " << *b<<std::endl;
    }
}