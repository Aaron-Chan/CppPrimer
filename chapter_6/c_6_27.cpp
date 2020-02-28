#include <iostream>
#include <string>
#include <cctype>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> li){
    int sum=0;
    for(const auto &item:li ){
        sum+=item;
    }
    return sum;
}

int main(){
   
    cout << sum({1,2,3,4}) << endl;
    return 1;
}