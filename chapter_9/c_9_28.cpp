

#include <iostream>
#include <forward_list>
#include <string>
using std::forward_list;
using std::cin;
using std::string;
using std::cout;
using std::endl;

void insertToForwardList(forward_list<string> &f_list,string target,string inser_value){
    auto pre = f_list.before_begin();
    auto current = f_list.begin();

    while(current!=f_list.end()){
        if(*current == target){
            f_list.insert_after(current,inser_value);
            return;
        }else{
            pre = current;
            current++;
        }
    }
    f_list.insert_after(pre,inser_value);
}

int main(){
   forward_list<string> f_list = {"ha","hi","world"};
   insertToForwardList(f_list,"hi","!");
     for(auto &i:f_list){
        cout << " l1 value " << i <<endl;
    }
    insertToForwardList(f_list,"tt","ggg");
     for(auto &i:f_list){
        cout << " l1 value " << i <<endl;
    }
}