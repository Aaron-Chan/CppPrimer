

#include <list>
#include <iostream>
#include <algorithm>
#include <string>
using std::list;
using std::string;
using std::cout;
using std::endl;

int main(){
    list<string> li{"hi","to","hi","dasdas","d"};
    int num = count(li.cbegin(),li.cend(),"hi");
    cout <<" num " <<num<< endl;
}