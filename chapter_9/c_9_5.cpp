

#include <vector>
#include <iostream>
using std::vector;
vector<int>::iterator find(vector<int>::iterator beg,vector<int>::iterator end,int target){
    while(beg!=end){
        if(*beg==target){
            return beg;
        }
        beg++;
    }
    return beg;
}

int main(){
    vector<int> v{1,2,3,4};
    auto it = find(v.begin(),v.end(),2);
    auto it2 = find(v.begin(),v.end(),5);
    std::cout << " find 2" << *it<< std::endl;
}