

#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::vector;
using std::string;
using std::cout;
using std::endl;


int main(){
    vector<string> v;
    auto size =  v.capacity();
    cout << " v size " << v.size() <<" v capacity " << v.capacity() <<endl;

    for(int i=0;i<100;i++){
        v.push_back("1");
        if(v.capacity()!=size){
            size =v.capacity();
            cout << " v size " << v.size() <<" v capacity " << v.capacity() <<endl;
        }
        
        // cout << " v size " << v.size() <<" v capacity " << v.capacity() <<endl;
    }
}