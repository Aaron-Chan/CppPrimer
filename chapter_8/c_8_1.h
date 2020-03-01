#ifndef cp_c8_1_h
#define cp_c8_1_h
#include <iostream>
#include <string>
std::istream &read(std::istream &in){
    auto old_state = in.rdstate();
    in.clear();
    std::string str;
    while(in >> str){
        std::cout << " data " <<str <<std::endl;
    }
    in.setstate(old_state);
    std::cout << " end "<<std::endl;
    return in;
}

#endif