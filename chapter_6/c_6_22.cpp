#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void swap(int *&p1,int *&p2){
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}


int main(){
   int i = 10;
   int j = 20;
   int *p1 = &i;
   int *p2 = &j;
   swap(p1,p2);
   cout << "i "<<i<<endl;
   cout << "j "<<j<<endl;
   cout << "p1 "<<*p1<<endl;
   cout << "p2 "<<*p2<<endl;

    return 1;
}