#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;
using namespace std::placeholders;


bool check_size(const string &str,string::size_type sz){
    return str.size() < sz;
}



int main(){
    string str("hellowor");
    vector<int> v={1,2,3,4,5,6,7,7,8,8,8,6,10,2,9};
    auto it = find_if(v.begin(),v.end(),bind(check_size,str,_1));
    cout <<"find  " <<*it << endl;
}