

#include <vector>
#include <iostream>
#include <list>
#include <string>
using std::vector;
using std::list;
using std::string;


int main(){
    vector<int> v1{1,2,3};
    vector<int> v2{1,2,3};
    vector<int> v3{1,2,4};
    std::cout << " v1==v2 " << (v1==v2) <<std::endl;
    std::cout << " v1==v3 " << (v1==v3) <<std::endl;

    
}