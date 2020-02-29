#include <iostream>
#include <string>

using namespace std;

string odd[] = {"1","2"};

string (& func())[];

auto func1()->string (&)[];

decltype(odd) &func2();

typedef string str_array[];

str_array &func3();

int main(){
   //尾置返回类型 比较方便
    
}