

#include <vector>
#include <iostream>
#include <string>
#include <map>
using std::vector;
using std::cout;
using std::map;
using std::endl;
using std::string;

void printWordCount(vector<string> &words);

int main(){
    vector<string> words{"Hi","hi","Hi","byte","good","good","byte","good","hi"};
    printWordCount(words);
}


void printWordCount(vector<string> &words){
    map<string,string::size_type> word_count;
    for(const auto &word:words){
        word_count[word]++;
    }

    for(auto &w:word_count){
       cout << " word " << w.first << " count " << w.second <<endl;
    }
}