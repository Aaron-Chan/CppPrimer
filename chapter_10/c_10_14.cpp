

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



int main(){
    auto func = [](int i,int j)->int{return i+j;};
    auto value = func(1,2);
    cout << "value " << value<<endl;
}