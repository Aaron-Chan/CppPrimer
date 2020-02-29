#ifndef cp_c7_15_h
#define cp_c7_15_h
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
    Person()=default;
    Person(std::string n,std::string addr):name(n),address(addr){}
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