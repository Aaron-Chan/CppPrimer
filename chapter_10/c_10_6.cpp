

#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
using std::list;
using std::string;
using std::cout;
using std::vector;
using std::endl;

int main(){
    list<int> li{1,2,3,4};
    vector<int> vect{1,2,3,4};
    fill_n(li.begin(),li.size(),0);
    fill_n(vect.begin(),vect.size(),0);
    for(auto & const value:li){
        cout << "value " <<value <<endl;
    }
    for(auto & const value:vect){
        cout << "value " <<value <<endl;
    }
}