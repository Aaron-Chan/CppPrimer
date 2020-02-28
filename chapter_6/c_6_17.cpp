#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool has_upper_char(const string &s){
    for(auto &c:s){
        if(isupper(c)){
            return true;
        }
    }
    return false;
}

void tolower_char(string &s){
    for(auto &c:s){
        c = tolower(c);
    }
}

int main(){
    string str = "abcD";
    cout<<"has upper "<<has_upper_char(str)<<endl;
    tolower_char(str);
    cout<<"tolower_char "<<str<<endl;

    return 1;
}