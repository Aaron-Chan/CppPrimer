#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::inserter;



int main(){
   vector<int> v{1,2,3,4,5,7,7,7,4,5};
   list<int> li;
   unique_copy(v.cbegin(),v.cend(),inserter(li,li.begin()));
   for(auto &num:li){
       cout <<"num " <<num<<endl;
   }
}