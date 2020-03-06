

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
    return str.size() > sz;
}


void biggies(vector<string> &words,vector<string>::size_type sz){
    stable_sort(words.begin(),words.end(),[](const string &s1,const string &s2){
        return s1.size()<s2.size();
    });
    auto fit_func = bind(check_size,_1,6);
    auto num = count_if(words.begin(),words.end(),fit_func);

    cout << "more than  " << sz << " count = " << num<<endl;

}



int main(){
    vector<string> words={"find","hi","world","happy","goodbye","love","computer","hi","world","goodbye","keybord"};
    biggies(words,6);
}