#ifndef cp_c7_4_h
#define cp_c7_4_h
#include <string>
struct Person{
    std::string name;
    std::string address;

    std::string getName()const{
        return name;
    }

    std::string getAddress()const{
        return address;
    }

};


#endif