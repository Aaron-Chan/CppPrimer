#include <iostream>
#include <string>

using namespace std;

int &get(int *array,int index){
    return array[index];
}

int main(){
   int ia[10];
   for(int i=0;i!=10;++i){
       get(ia,i) = i;
       cout << "ia " << ia[i] <<endl;
   }
    
}