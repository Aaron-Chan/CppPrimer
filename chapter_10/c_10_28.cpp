#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::inserter;
using std::deque;
using std::back_inserter;
using std::front_inserter;



int main(){
   vector<int> v{1,2,3,4,5,6,7,8,9};
   list<int> li;
   deque<int> deque_int;
   list<int> forward_int;

   auto li_it = back_inserter(li);
   auto deque_it = front_inserter(deque_int);
   auto forward_it = inserter(forward_int,forward_int.begin());
   copy(v.cbegin(),v.cend(),li_it);
   copy(v.cbegin(),v.cend(),deque_it);
   copy(v.cbegin(),v.cend(),forward_it);
   for( auto &num : li){
       //一样
       cout << " li value " <<num<< endl;
   }
   for( auto &num : deque_int){
       //9-1
       cout << " deque value " <<num<< endl;
   }
   for( auto &num : forward_int){
       cout << " forward_list value " <<num<< endl;
   }
   
}