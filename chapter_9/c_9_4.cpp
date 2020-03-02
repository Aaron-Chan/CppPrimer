

#include <vector>
#include <iostream>
using std::vector;
bool find(vector<int>::iterator beg,vector<int>::iterator end,int target){
    while(beg!=end){
        if(*beg==target){
            return true;
        }
        beg++;
    }
    return false;
}

int main(){
    vector<int> v{1,2,3,4};
    std::cout << " find 2" << find(v.begin(),v.end(),2) << std::endl;
    std::cout << " find 5" << find(v.begin(),v.end(),5) << std::endl;
}