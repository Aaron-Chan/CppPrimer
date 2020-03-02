

#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::string;
using std::cout;
using std::endl;

string &addPrePost(string &s,string const &pre,string const &post)
{
    s.insert(s.begin(),pre.begin(),pre.end());
    s.insert(s.end(),post.begin(),post.end());
    return s;
}




int main(){
    string name{"Mike"};
    cout << addPrePost(name,"Mr.","III") << endl;
}