

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
    int g = 10;
    auto func = [g](int i)->int{return i+g;};
    auto value = func(1);
    cout << "value " << value<<endl;
}