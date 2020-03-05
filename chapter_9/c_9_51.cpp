

#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::string;
using std::cout;
using std::endl;

class Day{
    public:
    Day(const string &str){
        string num{"0123456789"};
        
    }

    private:
    unsigned year;
    unsigned month;
    unsigned day;
}




int main(){
    string name{"ab2c3d7R4E6"};
    findNumberAndFindWord(name);
}