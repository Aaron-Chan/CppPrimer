#include <iostream>
using namespace std;
void swap(int &p,int &q){
    int temp = p;
    p = q;
    q = temp;
}
int main(){
    int i = 10;
    int j = 20;
    swap(i,j);
    cout<<"i ="<<i<<endl;
    cout<<"j ="<<j<<endl;

    return 1;
}