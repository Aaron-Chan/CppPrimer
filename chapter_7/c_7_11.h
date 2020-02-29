#ifndef cp_c7_11_h
#define cp_c7_11_h
#include <string>
#include <iostream>
struct Sales_data{
    std::string isbn()const{return this->bookNo;};
    Sales_data& combine(const Sales_data &s1);
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue=0.0;
    Sales_data()=default;
	Sales_data(std::string num) :bookNo(num) {};
	Sales_data::Sales_data(std::istream &in);
	Sales_data(std::string num,unsigned sold,double price) :bookNo(num),units_sold(sold),revenue(price*sold) {};

};

Sales_data& Sales_data::combine(const Sales_data &s1){
    units_sold+=s1.units_sold;
    revenue+=s1.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
};

std::istream &read(std::istream &in,Sales_data &s){
    double price=0;
    in >> s.bookNo>>s.units_sold>>price;
    s.revenue = price* s.units_sold;
    return in;
}

std::ostream &print(std::ostream &out,const Sales_data &s){
    out << s.bookNo << " " << s.units_sold<< " "<<s.revenue;
    return out;
}

Sales_data::Sales_data(std::istream &in) {
	read(in, *this);
}

#endif