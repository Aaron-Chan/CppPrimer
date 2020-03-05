

#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
#include "../chapter_7/c_7_11.h"

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;

bool compareIsbn(const Sales_data &s1,const Sales_data &s2){
    return s1.isbn() <s2.isbn();
}

void elimDups(){
   
    Sales_data s1("book1");
    Sales_data s2("book2");
    Sales_data s3("book3");
    Sales_data s4("aaron");
    vector<Sales_data> sale_vect{s1,s2,s3,s4};
    for(auto & const val : sale_vect){
        cout << val.isbn() <<endl;
    }
    sort(sale_vect.begin(),sale_vect.end(),compareIsbn);
    for(auto & const val : sale_vect){
        cout << val.isbn() <<endl;
    }
    
}



int main(){
    elimDups();
}