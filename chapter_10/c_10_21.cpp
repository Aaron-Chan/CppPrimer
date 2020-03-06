

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



int main(){
   int i =10;
   auto func = [i]()mutable ->bool {
       if(i>0)
       {
           i--;
           return true;
        }else{
            return false;
        }
    };
    while(func() ){
        cout << " i still more than 0 " << i << endl;
    }
}