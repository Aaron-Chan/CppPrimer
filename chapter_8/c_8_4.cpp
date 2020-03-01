
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void readToVector(string file_name,vector<string> &vect){
    ifstream ifs(file_name);
    if(ifs.is_open()){
        string str;
        while(getline(ifs,str)){
            vect.push_back(str);
        }
    }
}


int main(){
    vector<string> vect;
    readToVector("./c_8_4.txt",vect);
    for(const auto &s : vect){  
        cout << " str " << s<<endl;
    }
    
    return 0;
}