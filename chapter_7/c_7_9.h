#ifndef cp_c7_4_h
#define cp_c7_4_h
#include <string>
#include <iostream>
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

std::ostream &print(std::ostream &out, const Person &p){
    out << p.getName() << " " << p.getAddress();
    return out;
}

std::istream &read(std::istream &in,Person &p){
    in >> p.name >> p.address;
    return in;
}


#endif