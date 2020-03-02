

#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::vector;
using std::string;
using std::cout;
using std::endl;

void replace_str(string &s,string oldVal,string newVal){
    for(auto it = s.begin();it!=s.end();it++){
        if(oldVal == string(it,it+oldVal.size())){
            it = s.erase(it,it+oldVal.size());
            it = s.insert(it,newVal.begin(),newVal.end());
            it+=newVal.size();
        }
    }
}


int main(){
    string s("s though d");
    replace_str(s,"though","tho");
    cout << "s " << s<<endl;

}