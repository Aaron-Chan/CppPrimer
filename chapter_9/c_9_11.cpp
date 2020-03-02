

#include <vector>
#include <iostream>
using std::vector;


int main(){
    vector<int> v1{1,2,3,4};
    vector<int> v2;
    vector<int> v3 = {1,2,3};
    vector<int> v4(10);
    vector<int> v5(10,1);
    vector<int> v6=v1;
    vector<int> v7(v1);
    vector<int> v8(v1.begin(),v1.end());
    std::cout << "v1 " << v1.size() <<std::endl;
    std::cout << "v2 " << v2.size() <<std::endl;
    std::cout << "v3 " << v3.size() <<std::endl;
    std::cout << "v4 " << v4.size() <<std::endl;
    std::cout << "v5 " << v5.size() <<std::endl;
    std::cout << "v6 " << v6.size() <<std::endl;
    std::cout << "v7 " << v7.size() <<std::endl;
    std::cout << "v8 " << v8.size() <<std::endl;
    
}