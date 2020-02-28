#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void print(int i,const int *arr, size_t count){
    cout<<"i "<<i<<endl;
    for(size_t idx = 0;idx<count;idx++){
        cout<<"arr " << idx << " value="<<*(arr+idx)<<endl;
    }
}

void print2(int i,const int arr[], size_t count){
    cout<<"i "<<i<<endl;
    for(size_t idx = 0;idx<count;idx++){
        cout<<"arr " << idx << " value="<<*(arr+idx)<<endl;
    }
}

void print3(int i,const int *beg ,const int *end){
    cout<<"i "<<i<<endl;
    while(beg!=end){
        cout<<"value "<<*beg<<endl;
        beg++;
    }
}


int main(){
   int i =0,j[2]={0,1};
    print(i,j,2);
    print2(i,j,2);
    print3(i,begin(j),end(j));

    return 1;
}