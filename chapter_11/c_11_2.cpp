

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using std::vector;
using std::cout;
using std::map;
using std::endl;
using std::string;

void printWordCount(vector<string> &words);



auto strip_word(string &word)->string const& {
    for(auto &c:word){
        c = tolower(c);
    }
    word.erase(remove_if(word.begin(),word.end(),ispunct),word.end());
    return word;
}

void printWordCount(vector<string> &words){
    map<string,string::size_type> word_count;
   
    for( auto &word:words){
         word_count[strip_word(word)]++;
    }

    for(auto &w:word_count){
       cout << " word " << w.first << " count " << w.second <<endl;
    }
}

int main(){
    vector<string> words{"Hi","hi","Hi","byte","good","good","byte","good","hi."};
    printWordCount(words);
}