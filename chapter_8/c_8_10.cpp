
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using std::istream;
using std::string;

istream& func(istream &is)
{
    std::string buf;
    while (is >> buf)
        std::cout << buf << std::endl;
    is.clear();
    return is;
}

int main(int agrc,char **args){
    char *file_name = args[1];
    std::ifstream is(file_name);
    if(is){
        string line;
        while(getline(is,line)){
            std::istringstream ifs(line);
            func(ifs);
        }
    }
    return 0;
}