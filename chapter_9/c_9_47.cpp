

#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::string;
using std::cout;
using std::endl;

void findNumberAndFindWord(const string &str){
    string::size_type pos = 0;
    string number="0123456789";
    while((pos = str.find_first_of(number,pos)) != string::npos){
        cout <<"number " << str[pos] <<endl;
        pos = pos+1;
    }
    pos = 0;
     while((pos = str.find_first_not_of(number,pos)) != string::npos){
        cout <<"word " << str[pos] <<endl;
        pos = pos+1;
    }
}




int main(){
    string name{"ab2c3d7R4E6"};
    findNumberAndFindWord(name);
}