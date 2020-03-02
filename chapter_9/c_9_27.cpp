

#include <iostream>
#include <forward_list>
using std::forward_list;
using std::cin;
using std::cout;
using std::endl;


int main(){
   forward_list<int> f_list = {1,2,3,4,5,6};
   auto current = f_list.begin();
   auto end = f_list.end();
   auto pre = f_list.before_begin();
    while(current!=end){
        if(*current %2!=0){
            current = f_list.erase_after(pre);
        }else{
            pre = current;
            current++;
        }
    }
     for(auto &i:f_list){
        cout << " l1 value " << i <<endl;
    }
}