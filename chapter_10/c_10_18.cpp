

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

void elimDups(vector<string> &str_vect){
    sort(str_vect.begin(),str_vect.end());
    auto unique_end = unique(str_vect.begin(),str_vect.end());
    str_vect.erase(unique_end,str_vect.end());
}


void biggies(vector<string> &words,vector<string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string &s1,const string &s2){
        return s1.size()<s2.size();
    });
    auto not_fit_end = partition(words.begin(),words.end(),[sz](const string &s){return s.size() > sz;});
    cout << "more than  " << sz << " count = " << (not_fit_end-words.begin())<<endl;
    for_each(words.begin(),not_fit_end,[](const string &s){ cout << "s " << s<<endl;});

}



int main(){
    vector<string> words={"find","hi","world","happy","goodbye","love","computer","hi","world","goodbye","keybord"};
    biggies(words,5);
}