

#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include <string>
using std::list;
using std::cin;
using std::vector;
using std::deque;
using std::cout;
using std::endl;
using std::string;


int main(){
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> v1(ia,std::end(ia));
    list<int> l1(v1.cbegin(),v1.cend());
    auto v_it = v1.begin();
    while(v_it!=v1.end()){
        if(*v_it %2==0){
            v_it = v1.erase(v_it);
        }else{
            v_it++;
        }
    }
    auto l_it = l1.begin();
    
     while(l_it!=l1.end()){
        if(*l_it %2!=0){
            l_it = l1.erase(l_it);
        }else{
            l_it++;
        }
    }

    for(auto &i:v1){
        cout << " v1 value " << i <<endl;
    }
     for(auto &i:l1){
        cout << " l1 value " << i <<endl;
    }
}